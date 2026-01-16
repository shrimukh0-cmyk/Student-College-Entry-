//# Functions related to student:-

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"student.h"

// Dynamic array of students
struct Student* students = NULL;
int studentCount = 0;

// Function to add a student
void addStudent() {
    studentCount++;
    students = (struct Student*)realloc(students, studentCount * sizeof(struct Student));

    printf("Enter Roll Number: ");
    scanf("%d", &students[studentCount - 1].roll);

    printf("Enter Name: ");
    getchar(); // consume newline
    fgets(students[studentCount - 1].name, 50, stdin);
    students[studentCount - 1].name[strcspn(students[studentCount - 1].name, "\n")] = 0; // remove newline

    printf("Enter Branch: ");
    fgets(students[studentCount - 1].branch, 50, stdin);
    students[studentCount - 1].branch[strcspn(students[studentCount - 1].branch, "\n")] = 0;

    printf("Enter Stream: ");
    fgets(students[studentCount - 1].stream, 50, stdin);
    students[studentCount - 1].stream[strcspn(students[studentCount - 1].stream, "\n")] = 0;

    printf("Student added successfully!\n\n");
}

// Function to display all students
void displayStudents() {
    if(studentCount == 0) {
        printf("No students added yet.\n\n");
        return;
    }

    printf("\n=== Student List ===\n");
    for(int i = 0; i < studentCount; i++) {
        printf("Roll: %d | Name: %s | Branch: %s | Stream: %s\n",
               students[i].roll,
               students[i].name,
               students[i].branch,
               students[i].stream);
    }
    printf("\n");
}

/*
## 🚀 How to Compile and Run the Student Entry Management System

### 1️⃣ Navigate to the project folder

**Windows / PowerShell:**
```powershell
cd "C:\Users\HP\Downloads\Projects\Projects Using C\Student college entry system"

cd /path/to/Student-Entry-Management-System

gcc main.c student.c -o studentSystem

.\studentSystem.exe


*/
