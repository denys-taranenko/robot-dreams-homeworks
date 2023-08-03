#include "structures.h"

float calculateAverage(const Student& student, int num_grades) {

    int sum = 0;
    for (int i = 0; i < num_grades; i++)
    {
        sum += student.marks[i];
    }
    return static_cast<float>(sum) / static_cast<float>(num_grades);
}

bool compareStudents(const Student& student1, const Student& student2, int num_grades) {
    return calculateAverage(student1, num_grades) > calculateAverage(student2, num_grades);
}

const Student& findTopStudent(const Student students[], int num_students, int num_grades) {
    
    const Student* top_student = &students[0];
    float top_average = calculateAverage(*top_student, num_grades);

    for (int i = 1; i < num_students; i++) 
    {
        const Student* current_student = &students[i];
        float current_average = calculateAverage(*current_student, num_grades);

        if (current_average > top_average) 
        {
            top_student = current_student;
            top_average = current_average;
        }
    }

    return *top_student;
}

int countStudentsAbove75(const Student students[], int num_students, int passing_score) {

    int count = 0;
    for (int i = 0; i < num_students; i++)
    {
        if (calculateAverage(students[i], 4) > static_cast<float>(passing_score))
        {
            count++;
        }
    }
    return count;
}