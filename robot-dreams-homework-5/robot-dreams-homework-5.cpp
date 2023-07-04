#include <iostream>
#include <iomanip>

enum class Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    //Task 1

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

    //Task 2

    std::cout << "Hello! This program finds the smallest of two numbers!\n";

    std::cout << std::setfill('-') << std::endl;

    std::cout << "Enter two numbers (with a space): ";
    int first_num{};
    int second_num{};
    std::cin >> first_num >> second_num;

    int min_number = (first_num > second_num) ? second_num : first_num;

    std::cout << "The smallest number will be: " << min_number << std::endl;

    std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

    //Task 3

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

    //Task 4

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

    //Task 5

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

    //Task 6

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