#include "structures.h"

float calculateAverage(const Student& student) {

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += student.marks[i];
    }
    return static_cast<float>(sum) / 4.0f;
}

bool compareStudents(const Student& student1, const Student& student2) {

    return calculateAverage(student1) > calculateAverage(student2);
}

const Student& findTopStudent(const Student students[], int num_students) {

    const Student* top_student = &students[0];
    for (int i = 1; i < num_students; i++)
    {
        if (calculateAverage(students[i]) > calculateAverage(*top_student))
        {
            top_student = &students[i];
        }
    }
    return *top_student;
}

int countStudentsAbove75(const Student students[], int num_students) {

    int count = 0;
    for (int i = 0; i < num_students; i++)
    {
        if (calculateAverage(students[i]) > 75.0)
        {
            count++;
        }
    }
    return count;
}