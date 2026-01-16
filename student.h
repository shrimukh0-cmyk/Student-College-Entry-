//# Structs and function declarations:-

#ifndef STUDENT_H
#define STUDENT_H

struct Student {
    int roll;
    char name[50];
    char branch[50];
    char stream[50];
};

// Declare the global variables as extern
extern struct Student* students;
extern int studentCount;

// Function declarations
void addStudent();
void displayStudents();

#endif
