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
