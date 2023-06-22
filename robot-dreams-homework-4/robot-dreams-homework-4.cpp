#include <iostream>
#include <iomanip>

int main()
{
    //Task 1

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

    //Task 2

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
    int average = res_sum / 3;

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

    //Task 3

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

    //Task 4

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

    //Task 5

    const double PI = 3.14159;

    std::cout << "Hello! This program works with circles!" << "\n";

    std::cout << "Enter the radius of the circle: ";
    double radius;
    std::cin >> radius;

    double area = PI * radius * radius;
    double circum_ference = 2 * PI * radius;

    std::cout << std::setfill('-') << std::endl;

    std::cout << "Area of the circle: " << std::fixed << std::setprecision(3) << area << std::endl;
    std::cout << "Circumference of the circle: " << circum_ference << "\n";

    std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

    std::cout << "THE END \a";

    return 0;
}