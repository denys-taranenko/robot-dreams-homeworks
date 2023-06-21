#include <iostream>
#include <iomanip>


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

int main()
{
	//Task 1

	std::cout << "Enter integer 1: ";
	int first_number;
	std::cin >> first_number;

	std::cout << "Enter integer 2: ";
	int second_number;
	std::cin >> second_number;

	std::swap(first_number, second_number);

	std::cout << "Integer 1: " << first_number << std::endl;
	std::cout << "Integer 2: " << second_number << std::endl;

	std::cout << std::setfill('-') << std::endl;

	//Task 2

	double manip_nubmer = 3.1415;

	std::cout << "manip_nubmer = " << manip_nubmer << std::endl;
	std::cout << "manip_nubmer to int = " << int(manip_nubmer) << std::endl;
	std::cout << std::setw(20) << std::right << std::setfill('$') << manip_nubmer << std::endl;

	std::cout << std::setfill('-') << std::endl;

	//Task 3

	double different_formats = 3.1415;

	std::cout << "Standard Notation with two signs " << std::setprecision(2) << std::fixed << different_formats << std::endl;
	std::cout << "Standard Notation with ten characters " << std::setprecision(10) << std::fixed << different_formats << std::endl;
	std::cout << "E Notation with five signs " << std::setprecision(5) << std::scientific << different_formats << std::endl;
	std::cout << "E Notation with twenty characters " << std::setprecision(20) << std::scientific << different_formats << std::endl;

	std::cout << std::setfill('-') << std::endl;

	//Task 4

	std::cout << "Monday: " << int(WeekDay::Monday) << std::endl;
	std::cout << "Tuesday: " << int(WeekDay::Tuesday) << std::endl;
	std::cout << "Wednesday: " << int(WeekDay::Wednesday) << std::endl;
	std::cout << "Thursday: " << int(WeekDay::Thursday) << std::endl;
	std::cout << "Friday: " << int(WeekDay::Friday) << std::endl;
	std::cout << "Saturday: " << int(WeekDay::Saturday) << std::endl;
	std::cout << "Sunday: " << int(WeekDay::Sunday) << std::endl;

	std::cout << std::setfill('-') << std::endl;

	//Task 5

	int boolean_number = 312;

	std::cout << "Real number is " << boolean_number << std::endl;
	std::cout << "Boolean number is " << bool(boolean_number) << std::endl;
	std::cout << "In text format - " << std::boolalpha << bool(boolean_number);
}