#include <iostream>
#include "structures.h"
#include "sorting.h"

int main() {

    const int num_students = 5;
    Student students[num_students] = {
        {"John", {80, 75, 90, 85}},
        {"Alice", {70, 85, 80, 75}},
        {"Bob", {25, 30, 45, 10}},
        {"Eva", {85, 90, 95, 80}},
        {"Michael", {45, 30, 20, 85}}
    };

    quickSort(students, 0, num_students - 1, 4);

    std::cout << "Students are sorted by average grade:\n";
    for (int i = 0; i < num_students; i++) {
        std::cout << students[i].name << ": " << calculateAverage(students[i], 4) << "\n";
    }

    std::cout << std::endl;

    const Student& top_student = findTopStudent(students, num_students, 4);
    std::cout << "The most successful student: " << top_student.name << " (GPA: " << calculateAverage(top_student, 4) << ")\n";

    std::cout << std::endl;

    int count_above_75 = countStudentsAbove75(students, num_students, 75);
    std::cout << "The number of students with an average grade of more than 75% : " << count_above_75 << "\n";

    return 0;
}