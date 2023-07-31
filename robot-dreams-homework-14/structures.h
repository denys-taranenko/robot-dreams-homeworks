#pragma once
#include <string>

struct Student {

    std::string name;
    int marks[4];
};

float calculateAverage(const Student& student);
bool compareStudents(const Student& student1, const Student& student2);
const Student& findTopStudent(const Student students[], int num_students);
int countStudentsAbove75(const Student students[], int num_students);