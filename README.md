# Student-College-Entry
## 🚀 Project Overview

This is a **console-based Student Entry Management System** implemented in **C language**.  
It allows users to:

- Add multiple branches and streams dynamically  
- Add an unlimited number of students using pointers and dynamic memory  
- Display all student records  

This project demonstrates **core C concepts** such as **structures, pointers, dynamic memory allocation, and menu-driven programming**.  
It is suitable for **college-level practice**, **placements**, and **portfolio demonstration**.

---

## 📂 Folder Structure
Student-Entry-Management-System/

─ main.c # Main menu and program logic

─ student.c # Functions to manage student data

─ student.h # Structs and function declarations

─ Structure Programe College entry basic prototype.c # basic roadmap of programe / raw programe for structuring

─ README.md # Project documentation


---

## 📁 File Descriptions

### **main.c**
- Entry point of the program with a **menu-driven interface**.  
- Allows users to add students, display students, and exit the program.  
- Handles user input, validates choices, and frees dynamic memory.  
- Integrates functions from `student.c`.

### **student.c**
- Contains **function definitions**:
  - `addStudent()` → Dynamically adds students
  - `displayStudents()` → Displays all students
- Uses **structures** to store student data and **dynamic memory allocation** (`malloc`, `realloc`).  
- Works with `main.c` to manage student records.

### **student.h**
- Contains **struct definitions**, **global variables**, and **function prototypes**.  
- `struct Student` → stores Roll, Name, Branch, and Stream  
- `extern struct Student* students` → pointer to dynamic student array  
- `extern int studentCount` → tracks number of students  
- Included in both `main.c` and `student.c`.

### **Structure Program: College Entry Basic Prototype.c**
- This is a **raw prototype / roadmap program** used for planning the main project.  
- Demonstrates **basic structure of student entry management** using:
  - `struct Student`  
  - Static arrays or basic dynamic memory (depending on the prototype)  
  - Simple input/output operations  
- Helps **organize the final project logic** before implementing full dynamic allocation and menu-driven system.  
- Serves as a **reference for how the final program is structured**.
---

## 📈 Features

- Add multiple students dynamically  
- Store **student details**: Roll Number, Name, Branch, Stream  
- Display all students  
- Supports multiple branches and streams  
- Demonstrates **dynamic memory management** and **pointers**  

---

## 🛠 Run Instructions

### 1️⃣ Navigate to project folder

**Windows / PowerShell:**
 powershell
 
     cd "C:\Users\HP\Downloads\Projects\Projects Using C\Student college entry system"

---
**Compile the program**
All OS:

    gcc main.c student.c -o studentSystem
**Run the program**

Windows / PowerShell:

    .\studentSystem.exe

## Future Enhancements

 - Search student by Roll Number or Name

 - Delete student records

 - Sort students by Roll Number or Name

 - Save and load student data from a file

 - Add graphical or web-based interface

### 🎯 Learning Outcomes

Work with dynamic memory allocation for flexible data storage

Build menu-driven console applications

Implement basic student management functionality

## 🛠 Technologies Used

- **Programming Language:** C  
- **Compiler:** GCC (GNU Compiler Collection)  
- **IDE / Editor:** Any text editor or IDE that supports C (e.g., VS Code, Code::Blocks, Dev-C++)  
- **Operating Systems Tested:** Windows, Linux, macOS  
- **Concepts Demonstrated:** 
  - Structures  
  - Pointers  
  - Dynamic Memory Allocation (`malloc`, `realloc`, `free`)  
  - Menu-driven programs  
  - File organization across multiple source files (`.c` and `.h`)  
  - Basic algorithmic thinking for student entry management
 
  ## 🎯 Purpose & Motive

The purpose of the **Student Entry Management System** is to provide a **practical learning platform** for understanding core C programming concepts such as:

- Structures and arrays  
- Pointers and dynamic memory allocation  
- Modular programming using multiple `.c` and `.h` files  
- Menu-driven console applications  

**Motive:**  
- To create a **realistic simulation** of a college student management system.  
- To practice **dynamic and flexible programming techniques** in C.  
- To provide a **portfolio-ready project** demonstrating problem-solving and programming skills for placements and academic purposes.  

---

## 🖊 Author

**Name:** Suryansh Tiwari  
 
> This project is a learning and practice project implemented entirely in C, demonstrating core programming skills.

