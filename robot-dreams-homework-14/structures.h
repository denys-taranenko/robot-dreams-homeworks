#pragma once
#include <string>

struct Student {

    std::string name;
    int marks[4];
};

float calculateAverage(const Student& student, int num_grades);
bool compareStudents(const Student& student1, const Student& student2, int num_grades);
const Student& findTopStudent(const Student students[], int num_students, int num_grades);
int countStudentsAbove75(const Student students[], int num_students, int passing_score);