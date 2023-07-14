# Єдиний репозиторій для здачі домашніх завдань
Цей репозиторій призначений для зручної та організованої здачі домашніх завдань з курсу С++ для GameDev від школи [robot_dreams](https://robotdreams.cc/uk). Він створений з метою сприяти ефективному навчанню та взаємодії між студентами та викладачами курсу.

Код-ревьюер [Богдан](https://github.com/bohdanpc) :man:

Код-ревьюер [Олена](https://github.com/helen-black) :woman:

<details>
  <summary><h2>Домашня робота №1</h2></summary>

## Домашнє завдання

### Опис

Домашня робота №1, на тему "**Вступ та підготовка**".

### Завдання

1. Встановіть Visual Studio IDE.
2. Скомпілюйте та запустіть першу програму.
3. Виведіть на консоль текст "I love C++!".
4. Намалюйте у консолі прямокутний трикутник символом "*".

### Реалізація

Вихідний код програми наведено нижче:

```cpp
#include <iostream>

int main()
{
    std::cout << "I love C++!\n" << std::endl;
    
    std::cout << "*\n"
              << "**\n"
              << "* *\n"
              << "*  *\n"
              << "*   *\n"
              << "*    *\n"
              << "*     *\n"
              << "*      *\n"
              << "*       *\n"
              << "**********\n";

    return 0;
}
```
</details>

<details>
  <summary><h2>Домашня робота №2</h2></summary>

## Домашнє завдання

### Опис

Домашня робота №2, на тему "**Система контролю версій Git**".

### Завдання

1. Налаштувати власний профіль на github.
2. Налаштувати git середовище за інструкцією в додаткових матеріалах.
3. Перенести домашні завдання з лекції 1 на гітхаб.

### Реалізація

Був використаний особистий профіль на github - [Denys Taranenko](https://github.com/denys-taranenko).

Також була перенесена Домашня робота №1 в єдиний репозиторій - [robot-dreams-homeworks](https://github.com/denys-taranenko/robot-dreams-homeworks).

</details>

<details>
  <summary><h2>Домашня робота №3</h2></summary>

## Домашнє завдання

### Опис

Домашня робота №3, на тему "**Змінні та типи даних**".

### Завдання

1. Зчитати з клавіатури 2 числа; Поміняти місцями значення змінних; надрукувати нові значення в консоль. 

2. Створити та ініціалізувати змінну типу double, вивести значення змінної в консолі; вивести значення змінної приведене до типу int. (без символів після коми); Вивести число в рядок шириною 20 символів, вирівняти по правому краю, пусте місце заповнити символом '$'.

3. Створити double змінну і вивести її в різних форматах: з різною точністю (2, 5, 10 знаків після коми), в різних нотаціях(standard, e-notation).

4. Створити енам WeekDay, де кожному дню тижня відповідає порядковий номер (1-7). Вивести числове значення кожного дня тижня у консоль (за допомогою приведення типу з enam class в int).

5. Зчитати число з консолі. Привести число до типу bool, вивести значення bool у текстовому форматі за допомогою відповідного I/O manipulator.

### Реалізація

Вихідний код програми наведено нижче:

#### Завдання №1

```cpp
std::cout << "Enter integer 1: ";
int first_number;
std::cin >> first_number;

std::cout << "Enter integer 2: ";
int second_number;
std::cin >> second_number;

int temp = first_number;
first_number = second_number;
second_number = temp;

std::cout << "Integer 1: " << first_number << std::endl;
std::cout << "Integer 2: " << second_number << std::endl;

std::cout << std::setfill('-') << std::endl;
```

#### Завдання №2

```cpp
double manip_nubmer = 3.1415;

std::cout << "manip_nubmer = " << manip_nubmer << std::endl;
std::cout << "manip_nubmer to int = " << int(manip_nubmer) << std::endl;
std::cout << std::setw(20) << std::right << std::setfill('$') << manip_nubmer << std::endl;

std::cout << std::setfill('-') << std::endl;
```

#### Завдання №3

```cpp
double different_formats = 3.1415;

std::cout << "Standard Notation with two signs " << std::setprecision(2) << std::fixed << different_formats << std::endl;
std::cout << "Standard Notation with ten characters " << std::setprecision(10) << std::fixed << different_formats << std::endl;
std::cout << "E Notation with five signs " << std::setprecision(5) << std::scientific << different_formats << std::endl;
std::cout << "E Notation with twenty characters " << std::setprecision(20) << std::scientific << different_formats << std::endl;

std::cout << std::setfill('-') << std::endl;
```

#### Завдання №4

```cpp
enum class WeekDay
{
Monday = 1,
Tuesday,
Wednesday,
Thursday,
Friday,
Saturday,
Sunday
};

std::cout << "Monday: " << int(WeekDay::Monday) << std::endl;
std::cout << "Tuesday: " << int(WeekDay::Tuesday) << std::endl;
std::cout << "Wednesday: " << int(WeekDay::Wednesday) << std::endl;
std::cout << "Thursday: " << int(WeekDay::Thursday) << std::endl;
std::cout << "Friday: " << int(WeekDay::Friday) << std::endl;
std::cout << "Saturday: " << int(WeekDay::Saturday) << std::endl;
std::cout << "Sunday: " << int(WeekDay::Sunday) << std::endl;

std::cout << std::setfill('-') << std::endl;
```

#### Завдання №5

```cpp
int boolean_number = 312;

std::cout << "Real number is " << boolean_number << std::endl;


std::cout << "Boolean number is " << bool(boolean_number) << std::endl;
std::cout << "In text format - " << std::boolalpha << bool(boolean_number);
```
</details>

<details>
  <summary><h2>Домашня робота №4</h2></summary>

## Домашнє завдання

### Опис

Домашня робота №4, на тему "**Оператори**".

### Завдання

1. Зчитати з клавіатури число: скільки секунд гравець провів в грі. Підрахувати і надрукувати  скільки це годин, хвилин, секунд.
   
2. Зчитати з консолі три числа. Надрукувати їх суму, добуток, середнє арифметичне, результат порівняння першого числа з другим та другого з третім.

3. Зчитати з клавіатури два числа. Створити змінні типу бул lessThan, equal, moreThan, lessOrEqual; присвоїти їм значення порівняння першого та другого числа; Вивести бул змінні в консоль; Вивести бул змінні в рядковому форматі "true/false" замість числового "1/0"

4. Зчитати два числа: width, height прямокутника. Порахувати та вивести площу, периметр.

5. Зчитати радіус кола. Обрахувати площу та довжину кола.

### Реалізація

Вихідний код програми наведено нижче:

#### Завдання №1

```cpp
const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE * MINUTES_PER_HOUR;
    
std::cout << "Hello! This program will convert your time to seconds!" << "\n";

std::cout << "How many seconds did you spend in the game? ";
int game_seconds;
std::cin >> game_seconds;

int game_hours = game_seconds / SECONDS_PER_HOUR;
game_seconds %= SECONDS_PER_HOUR;

int game_minutes = game_seconds / SECONDS_PER_MINUTE;
game_seconds %= SECONDS_PER_MINUTE;

std::cout << "Your game time = " << game_hours << " hours, " << game_minutes << " minutes, " << game_seconds << " seconds" << "\n";

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №2

```cpp
std::cout << "Hello! This program will play with your numbers!" << "\n";
  
std::cout << "Enter the first number: ";
int first_number;
std::cin >> first_number;
  
std::cout << "Enter the second number: ";
int second_number;
std::cin >> second_number;
  
std::cout << "Enter the third number: ";
int third_number;
std::cin >> third_number;
  
int res_sum = first_number + second_number + third_number;
int res_mult = first_number * second_number * third_number;
float average = float(res_sum) / 3;
  
bool res_first_with_second = first_number >= second_number;
bool res_second_with_third = second_number >= third_number;
  
std::cout << std::setfill('-') << "\n";
  
std::cout << "The sum of your numbers = " << res_sum << "\n";
std::cout << "The multiplication of your numbers = " << res_mult << "\n";
std::cout << "The average of your numbers = " << average << "\n";
  
std::cout << std::setfill('-') << std::endl;
  
std::cout << "Is your first number greater than the second? " << std::boolalpha << res_first_with_second << "\n";
std::cout << "Is your second number greater than the third? " << std::boolalpha << res_second_with_third << "\n";
  
std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №3

```cpp
std::cout << "Hello! This program works with bool!" << "\n";

std::cout << "Enter two numbers separated by a space: ";
int first_num;
int second_num;
std::cin >> first_num >> second_num;

bool less_than = first_num < second_num;
bool equal = first_num == second_num;
bool more_than = first_num > second_num;
bool less_or_equal = first_num <= second_num;

std::cout << std::setfill('-') << std::endl;

std::cout << std::boolalpha << "Less than: " << less_than << "\n";
std::cout << "Equal: " << equal << "\n";
std::cout << "More than: " << more_than << "\n";
std::cout << "Less than or equal: " << less_or_equal << "\n";

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №4

```cpp
std::cout << "Hello! This program calculates the area and perimeter of a rectangle!" << "\n";

std::cout << "Enter the width of the rectangle (in units): ";
double width_rectangle;
std::cin >> width_rectangle;

std::cout << "Enter the height of the rectangle (in units): ";
double height_rectangle;
std::cin >> height_rectangle;

double area_rectangle = width_rectangle * height_rectangle;
double perimeter = 2 * (width_rectangle + height_rectangle);

std::cout << std::setfill('-') << std::endl;

std::cout << "Area of the rectangle: " << area_rectangle << "\n";
std::cout << "Perimeter of the rectangle: " << perimeter << "\n";

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №5

```cpp
const double PI = 3.14159;

std::cout << "Hello! This program works with circles!" << "\n";

std::cout << "Enter the radius of the circle: ";
double radius = 0.0;
std::cin >> radius;

const double area = PI * radius * radius;
const double circumference = 2 * PI * radius;

std::cout << std::setfill('-') << std::endl;

std::cout << "Area of the circle: " << std::fixed << std::setprecision(3) << area << std::endl;
std::cout << "Circumference of the circle: " << circumference << "\n";

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;



std::cout << "THE END \a";
```
</details>

<details>
  <summary><h2>Домашня робота №5</h2></summary>

## Домашнє завдання

### Опис

Домашня робота №5, на тему "**Розгалуження і умови**".

### Завдання

1. Зчитати три числа, надрукувати максимальне з цих трьох чисел.
   
2. Зчитати два числа, знайти мінімум з двох чисел, використовуючи тернарний оператор.

3. Програма, що перевіряє, чи ділиться  введене число націло на 5 та 11 одночасно.

4. Зчитати 3 числа - можливі значення кутів трикутника. Перевірити, чи дані кути формують трикутник.

5. Створити enum class Month для всіх місяців; зчитати з консолі число, привести його до відповідного значення енама місяців; використовуючи свіч та enum надрукувати назву місяця у консоль. У випадку, якщо число введене невірно - повідомити користувача про помилку.

6. Зчитати з консолі число від 1 до 12. Це число - номер місяця (1 - січень, 2 - лютий і т.д.). Вивести на екран пору року, якій відповідає даний місяць. Наприклад користувач ввів 5. Потрібно вивести - “Spring”.

### Реалізація

Вихідний код програми наведено нижче:

#### Завдання №1

```cpp
std::cout << "Hello! This program reads three numbers and outputs the largest of them!\n";

std::cout << std::setfill('-') << std::endl;

std::cout << "Enter the first number: ";

int first_number{};
std::cin >> first_number;

std::cout << "Enter the second number: ";

int second_number{};
std::cin >> second_number;

std::cout << "Enter the third number: ";

int third_number{};
std::cin >> third_number;

if (first_number > second_number && first_number > third_number)
std::cout << "The largest of these numbers is: " << first_number << "\n";

else if (second_number > third_number)
std::cout << "The largest of these numbers is: " << second_number << "\n";

else
std::cout << "The largest of these numbers is: " << third_number << "\n";

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №2

```cpp
std::cout << "Hello! This program finds the smallest of two numbers!\n";

std::cout << std::setfill('-') << std::endl;

std::cout << "Enter two numbers (with a space): ";
int first_num{};
int second_num{};
std::cin >> first_num >> second_num;

int min_number = (first_num > second_num) ? second_num : first_num;

std::cout << "The smallest number will be: " << min_number << std::endl;

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №3

```cpp
const int DIVISIBLE_BY_5 = 5;
const int DIVISIBLE_BY_11 = 11;

std::cout << "Hello! This program will check if your number is divisible by 5 and 11 at the same time!\n";

std::cout << std::setfill('-') << std::endl;

std::cout << "Enter the desired number: ";
int entered_number{};
std::cin >> entered_number;

if (entered_number % DIVISIBLE_BY_5 == 0 && entered_number % DIVISIBLE_BY_11 == 0)
std::cout << "Yes, the entered number is divisible by 5 and 11 at the same time!\n";
else
std::cout << "No, this number is not divisible by 5 and 11 without a remainder.\n";

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №4

```cpp
std::cout << "Hello! This program will check if a triangle is formed!\n";

std::cout << std::setfill('-') << std::endl;

std::cout << "Enter the first angle of the triangle: ";
float first_corner{};
std::cin >> first_corner;

std::cout << "Enter the second angle of the triangle: ";
float second_corner{};
std::cin >> second_corner;

std::cout << "Enter the third angle of the triangle: ";
float third_corner{};
std::cin >> third_corner;

float const sum_of_angles = first_corner + second_corner + third_corner;

bool const is_triangle_formed = (first_corner > 0 && second_corner > 0 && third_corner > 0 && sum_of_angles == 180);

if (is_triangle_formed)
std::cout << "A triangle can be formed with the given angles!\n";
else
std::cout << "Unfortunately, a triangle cannot be formed with the given angles.\n";

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №5

```cpp
std::cout << "Hello! This app shows the name of the month by numbers!\n";

std::cout << std::setfill('-') << std::endl;

std::cout << "Enter a number from 1 to 12: ";
int input{};
std::cin >> input;

Month month = Month(input);

    switch (month)
    {
    case Month::January:
        std::cout << "January" << std::endl;
        break;
    case Month::February:
        std::cout << "February" << std::endl;
        break;
    case Month::March:
        std::cout << "March" << std::endl;
        break;
    case Month::April:
        std::cout << "April" << std::endl;
        break;
    case Month::May:
        std::cout << "May" << std::endl;
        break;
    case Month::June:
        std::cout << "June" << std::endl;
        break;
    case Month::July:
        std::cout << "July" << std::endl;
        break;
    case Month::August:
        std::cout << "August" << std::endl;
        break;
    case Month::September:
        std::cout << "September" << std::endl;
        break;
    case Month::October:
        std::cout << "October" << std::endl;
        break;
    case Month::November:
        std::cout << "November" << std::endl;
        break;
    case Month::December:
        std::cout << "December" << std::endl;
        break;
    default:
        std::cout << "Error: The entered number is incorrect.\n";
        break;
    }
std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №6

```cpp
std::cout << "Hello! This app shows the season!\n";

std::cout << std::setfill('-') << std::endl;

std::cout << "Enter a number from 1 to 12: ";
int month_number{};
std::cin >> month_number;

Month month_task_6 = Month(month_number);

    switch (month_task_6)
    {
    case Month::December:
    case Month::January:
    case Month::February:
        std::cout << "Winter" << std::endl;
        break;
    case Month::March:
    case Month::April:
    case Month::May:
        std::cout << "Spring" << std::endl;
        break;
    case Month::June:
    case Month::July:
    case Month::August:
        std::cout << "Summer" << std::endl;
        break;
    case Month::September:
    case Month::October:
    case Month::November:
        std::cout << "Autumn" << std::endl;
        break;
    }

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

std::cout << "THE END!\a";

return 0;
}
```
</details>

<details>
  <summary><h2>Домашня робота №6</h2></summary>

## Домашнє завдання

### Опис

Домашня робота №6, на тему "**Цикли**".

### Завдання

1. Зчитати з консолі три числа: перший елемент, крок арифметичної прогресії, номер останнього елемента арифметичної прогресії (арифметична прогресія - це послідовність дійсних чисел, кожен член якої, починаючи з другого, утворюється додаванням до попереднього члена одного й того ж числа. Загальний вид арифметичної прогресії: 
a1, a1 + d, a1 + 2d, …, a1 + (n - 1)d, …,
де a1 - це перший член прогресії, d = an+1 - an 
Як результат, надрукувати всі елементи арифметичної прогресії починаючи з першого до останнього.
   
2. Зчитати з консолі число - номер елемента послідовності Фібоначчі. Надрукувати значення даного елемента послідовності Фібоначчі (послідовність Фібоначчі -  числова послідовність, задана таким співвідношенням:
F1 = 1, F2 = 1, Fn+2 = Fn + Fn+1, n = 1, 2, 3, …,
F1 = 1, F2 = 1, F3 = 2, F4 = 3, F5 = 5, F6 = 8, F7 = 13, F8 = 21

3. Зчитати ціле додатне число. Вивести факторіал цього числа. (Факторіал натурального числа n - добуток чисел від 1 до цього числа, позначається як n! Н-д: 5! = 1⋅2⋅3⋅4⋅5 = 120).

4. За допомогою циклу надрукувати геометричні фігури; розмір сторін/кількість рядків вводить користувач з консолі;

5. В циклі зчитати символ char. В залежності від природи символу виконати наступні дії: 
a. буква в нижньому регістрі - привести до верхнього та вивести;
b. цифра - додати до загальної суми введених цифр, та вивести результат поточної суми;
c. Інше (розділові знаки, спецсимвол, тд) - вивести повідомлення, що цей символ не обробляється програмою та продовжити цикл;
d. Завершити програму, якщо введено символ ‘.’;
<cctype> header для референсу з корисними функціями роботи з символами [https://cplusplus.com/reference/cctype/](https://cplusplus.com/reference/cctype/)

### Реалізація

Вихідний код програми наведено нижче:

#### Завдання №1

```cpp
std::cout << "Enter the first element of the arithmetic progression: ";
int first_element{};
std::cin >> first_element;

std::cout << "Enter the arithmetic progression step: ";
int step{};
std::cin >> step;

std::cout << "Enter the number the last element of the arithmetic progression: ";
int last_element{};
std::cin >> last_element;

std::cout << std::setfill('-') << std::endl;

std::cout << "Arithmetic progression: ";

    for (int i = 0; i < last_element; i++)
    {
        std::cout << first_element << " ";
        first_element += step;
    }
std::cout << std::endl;

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №2

```cpp
std::cout << "Enter the element number of the Fibonacci sequence: ";
int number{};
std::cin >> number;

std::cout << std::setfill('-') << std::endl;

int current_fib{};
int prev_fib_2 = 0;
int prev_fib_1 = 1;

    if (number == 0)
    {
        current_fib = prev_fib_2;
    }
    else if (number == 1)
    {
        current_fib = prev_fib_1;
    }
    else 
    {
        for (int i = 2; i <= number; i++)
        {
            current_fib = prev_fib_2 + prev_fib_1;
            prev_fib_2 = prev_fib_1;
            prev_fib_1 = current_fib;
        }
    }

std::cout << "The element " << number << " of the Fibonacci sequence " << current_fib << std::endl;

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №3

```cpp
std::cout << "Enter a positive integer : ";
int user_number{};
std::cin >> user_number;

std::cout << std::setfill('-') << std::endl;

int factorial = 1;
    for (int i = 1; i <= user_number; i++)
    {
        factorial *= i;
    }

std::cout << "Factorial of a number " << user_number << " = " << factorial << std::endl;

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;
```

#### Завдання №4

```cpp
std::cout << "Enter the number of rows: ";
int rows{};
std::cin >> rows;

std::cout << std::setfill('-') << std::endl;

    // a)
std::cout << "a)" << std::endl;
    
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

std::cout << std::setfill('-') << std::endl;

    // b)
std::cout << "b)" << std::endl;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

std::cout << std::setfill('-') << std::endl;

    // c)
std::cout << "c)" << std::endl;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

std::cout << std::setfill('-') << std::endl;

    // d)
std::cout << "d)" << std::endl;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows + i - 1; j++) {
            if (j <= i - 1) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }

std::cout << std::setfill('-') << std::endl;

    // e)
std::cout << "e)" << std::endl;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                std::cout << "1";
            }
            else {
                std::cout << "0";
            }
        }
        std::cout << std::endl;
    }

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

```

#### Завдання №5

```cpp
char symbol{};
int sum{};

    while (true) {
        std::cout << "Enter a character: ";
        std::cin >> symbol;

        if (std::islower(symbol)) {
            symbol = std::toupper(symbol);
            std::cout << "Upper case letter: " << symbol << std::endl;
        }
        else if (std::isdigit(symbol)) {
            sum += symbol - '0';
            std::cout << "Current sum of digits: " << sum << std::endl;
        }
        else if (symbol == '.') {
            break;
        }
        else {
            std::cout << "This character is not processed by the program." << std::endl;
        }
    }

std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

std::cout << "THE END!\a";
```
</details>

<details>
  <summary><h2>Домашня робота №7</h2></summary>

## Домашнє завдання

### Опис

Домашня робота №7, на тему "**Практика 1: Задачі на цикли, умови**".

### Завдання

МІНІ-ГРА в консолі: ГЕНЕРАТОР ВИПАДКОВИХ ЧИСЕЛ

a. Зчитати число з консолі в діапазоні 0-50 (або будь-який інший);

b. програма випадковим чином генерує (загадує) число - правильну відповідь;

c. Попросити юзера вгадати загадане число у консолі;

d. Зробити юзеру підказку про відношення його числа до загаданого в наступних випадках:

    i. Якщо його число більше 20 від загаданого;

    ii. Якщо його число більше 10 від загаданого;

    iii. Якщо загадане число більше 20 від числа юзера;

    iv. Якщо загадане число більше 10 від числа юзера;

v. *Вигадати свою творчу умову: (зміна повідомлень в залежності від номера запуску програми, особливе повідомлення при ідеальному guess’і з першого разу, заохочення юзера, підтримка негативних чисел, особливий текст при введені числа за діапазоном можливих значень, обман юзера, тощо)

e. Привітати юзера з перемогою, якщо введено загадане число та вивести:

    i. кількість спроб юзера в даній грі;

    ii. найменшу кількість спроб у попередніх іграх, включно з цією (highscore);

    iii. *Своя творча статистика, інформація, повідомлення, тощо;

f. Повторити весь цикл програми, поки юзер на введе -1 (*або будь-яке інше число)

### Реалізація

Короткий опис реалізації та функціоналу:

**ОПИС ФУНКЦІЙ:**
```cpp
void displayMainMenu(); //Вивід головного меню

void displayHelp(); //Вивід допомоги по грі

void displayStatistics(int best_record, int last_record); //Вивід статистики

void handleInvalidInput(); //Перевірка не некорректний ввід

int getDifficultyLevel(); //Задає рівень складності

int generateRandomNumber(int difficulty_level); //Генератор рандомних чисел

int getUserNumber(); //Зчитування цифри від користувача

bool askToPlayAgain(); //Вивід пропозиції зіграти ще

void startNewGame(int difficulty_level, int& best_record, int& last_record); //Основна логіка вгадування чисел

void playGame(); //Запуск всієї гри
```

**ФУНКЦІОНАЛ:**
1 - Програма має особисте меню, в якому ми обираємо необхідний пункт шляхом натискання відповідної цифри.

2 - Цифра 4 - Вихід з гри.

3 - Цифра 3 - показати Статистику. Статистика зберігає в собі два параметра - Найкраща спроба за весь час гри, і Остання спроба в грі.

4 - Цифра 2 - короткий опис про програму.

5 - Цифра 1 - Почати гру. В такому випадку нам буде запропановано обрати складність, одну серед трьох. - на першому рівні складності, діапазон чисел генератора від 0 до 50, а кількість спроб - необмежена - на другому рівні складності, діапазон чисел генератора від -50 до 50, і кількість спроб - необмежена - на третьому рівні складності, діапазон чисел генератора від -50 до 50, а кількість спроб - 7 спроб.

6 - У випадку якщо користувач вводить число яке явно лежить за межами даних діапазонів - йому про це сповістить програма.

7 - У випадку ідеального вгадування (з першої спроби) программа також це замітить і виведе відповідне повідомлення.

8 - На третьому рівні складності, коли кількість спроб сягне 0, програма виведе повідомлення, та назве число яке вона загадала.

9 - Протягом всього вгадування користувачу будуть даватись підказки, за діапазонами які в умові (-20 - 20; -10 - 10) відповідними різними повідомленнями.

10 - По закінченні гри программа привітає з перемогою, або сповістить про поразку, та запропонує зіграти ще. Обираючи відповідний символ, ми знову або будемо обирати складність гри, або потрапимо в Головне меню звідки можна вийти з програми.

</details>

<details>
  <summary><h2>Домашня робота №8</h2></summary>

## Домашнє завдання

### Опис

Домашня робота №8, на тему "**Функції**".

### Завдання

1. Функція приймає число - кількість чисел для вводу юзеру. Порахувати кількість введених юзером додатних чисел, від’ємних та 0. Вивести у консоль ці лічильники.
   
2. Функція int factorial(int count) приймає число - count! Написати функції, які обраховують значення факторіала:
   
      a. за допомогою цикла;

      b. з використанням рекурсії;

3. Функція для друкування перших N натуральних чисел: void printNaturalNumbers(int count):
   
      a. від найбільшого до найменшого за допомогою цикла;

      b. від найменшого до найбільшого за допомогою цикла;

      c. від найбільшого до найменшого за допомогою рекурсії;

      d. від найменшого до найбільшого за допомогою рекурсії;

4. Винести декларації та дефінішини циклічних функцій в окрему пару header/cpp файл, а також рекурсивні функції в окрему пару header/cpp файл.

### Реалізація

Вихідний код програми наведено нижче:

#### Завдання №1

```cpp
void countNumbers(int count)
{
    int positive = 0;
    int negative = 0;
    int zeros = 0;

    for (int i = 0; i < count; i++)
    {
        int user_number = 0;
        std::cin >> user_number;

        if (user_number > 0)
        {
            positive++;
        }
        else if (user_number < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }
    }

    std::cout << "Positive numbers: " << positive << std::endl;
    std::cout << "Negative numbers: " << negative << std::endl;
    std::cout << "Zeroes: " << zeros << std::endl << std::endl;
}
```

#### Завдання №2

```cpp
int factorialUsingLoop(int count)
{

    int result = 1;

    for (int i = 1; i <= count; i++)
    {
        result *= i;
    }
    return result;
}

int factorialUsingRecursion(int count)
{
    if (count == 0 || count == 1)
    {
        return 1;
    }
    return count * factorialUsingRecursion(count - 1);
}
```

#### Завдання №3

```cpp
void printNaturalNumbersCycleA(int count)
{
    for (int i = count; i >= 1; i--)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}


void printNaturalNumbersCycleB(int count)
{
    for (int i = 1; i <= count; i++)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}

void printNaturalNumbersRecursionC(int count)
{
    if (count == 0)
    {
        std::cout << std::endl;
        return;
    }

    std::cout << count << " ";
    printNaturalNumbersRecursionC(count - 1);
}


void printNaturalNumbersRecursionD(int count)
{
    if (count >= 1)
    {
        printNaturalNumbersRecursionD(count - 1);
        std::cout << count << " ";
    }
}
```

#### Завдання №4

Функції згруповані в окремі пари header/cpp файли:

cycle_functions.h / cycle_functions.cpp

recursion_functions.h / recursion_functions.cpp

</details>
