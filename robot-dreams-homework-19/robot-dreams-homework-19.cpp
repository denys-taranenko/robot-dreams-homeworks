#include <iostream>
#include <string>
#include <algorithm>
#include <vld.h> //Add vld.h

class A 
{
public:
    A() 
    {
        std::cout << "A()" << std::endl;
    }

    virtual ~A() 
    {
        std::cout << "~A()" << std::endl;
    }
};

class B : public A 
{
public:
    B() : my_string("Default String") 
    {
        std::cout << "B()" << std::endl;
    }

    ~B() override 
    {
        std::cout << "~B()" << std::endl;
    }

    void print() const 
    {
        std::cout << my_string << std::endl;
    }

    void print(const std::string& text) const 
    {
        std::cout << text << std::endl;
    }

private:
    std::string my_string;
};

class Base 
{
public:
    virtual void print() 
    {
        std::cout << "Base" << std::endl;
    }

    virtual ~Base() {} // Add a virtual destructor for polymorphic behavior
};

class Derived1 : public Base 
{
public:
    void print() override 
    {
        std::cout << "Derived1" << std::endl;
    }
};

class Derived2 : public Base 
{
public:
    void print() override 
    {
        std::cout << "Derived2" << std::endl;
    }
};

class Animal 
{
public:
    virtual ~Animal() {} // Add a virtual destructor for polymorphic behavior
    virtual void eat() {}
    virtual void sleep() 
    {
        std::cout << "Animal sleep method" << std::endl;
    }
};

class Dog : public Animal 
{
public:
    void eat() override 
    {
        eatCallsCounter++;
        std::cout << "Dog eating" << eatCallsCounter << std::endl; // Add endl to flush output
    }

private:
    int eatCallsCounter = 0;
};

class Cat : public Animal 
{
public:
    void eat() override 
    {
        std::cout << "Cat eating" << std::endl;
    }
};

void toLower(std::string& str) 
{
    for (char& ch : str) 
    {
        ch = std::tolower(static_cast<unsigned char>(ch)); // Ensure proper case conversion
    }
}

Animal* createAnimal(const std::string& pet) 
{
    std::string petCopy = pet; // Create a copy of the input string to modify
    toLower(petCopy);

    if (petCopy == "dog") 
    {
        return new Dog;
    }
    if (petCopy == "cat") 
    {
        return new Cat;
    }

    return new Animal;
}

int main() 
{

    // CASE 1
    A* a = new A();
    B* b = dynamic_cast<B*>(a); // Use dynamic_cast for safer downcasting

    if (b != nullptr) // Check if downcast is successful
    { 
        b->print("sdf");
        b->print();
    }

    delete a; // Delete dynamically allocated objects

    // CASE 2
    Derived1 d1;
    d1.print();

    Base* bp = &d1; // No need for dynamic_cast here

    bp->print();

    Derived2* dp2 = dynamic_cast<Derived2*>(bp);

    if (dp2 != nullptr) // Check if downcast is successful
    { 
        dp2->print();
    }

    // CASE 3
    std::string petChoice;
    std::cout << "Choose your pet (Dog/Cat): ";
    std::cin >> petChoice;

    Animal* animal = createAnimal(petChoice);

    Dog* dog = dynamic_cast<Dog*>(animal);

    if (dog != nullptr) 
    {
        dog->eat();
    }

    delete animal; // Delete dynamically allocated objects

    return 0;
}