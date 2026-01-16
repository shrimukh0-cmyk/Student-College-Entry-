//# Main menu and logic
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main() {
    int choice;
    do {
        printf("=== Student Entry Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n\n");
        }

    } while(choice != 3);

    free(students); // free allocated memory
    return 0;
}
