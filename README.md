Batch: 25

Member 1: Venya Garg
Member 2: Kirti Kumar

Objectives and Features:
- Accept marks for five subjects for multiple students.
- Calculate total marks, percentage, and grade.
- Identify pass/fail status using a specified minimum mark in each subject.
- Display the class topper and class average.

C Programming Concepts Used:

1. Variables and Data Types
2. Structures
3. Arrays
4. Strings
5. Functions
6. Loops
7. Conditional Statement
8. Switch Case
9. Operators
10. Input/Output
11. Input Validation
12. Nested Loops

Grading Criteria:

- 90–100%: A+
- 80–89%: A
- 70–79%: B+
- 60–69%: B
- 50–59%: C
- 40–49%: D
- Below 40%: F

Instructions to Compile and Execute the Program:

1. Save the C source code.
2. Open the file in a C compiler/IDE such as VS Code, Code::Blocks, Dev-C++, or GCC.
3. Compile the program to check for errors.
4. If using GCC, compile using: gcc student_grade_analyzer.c -o student_grade_analyzer
5. Run the compiled program: ./student_grade_analyzer
6. Enter the number of students when prompted.
7. Use the menu options to:
   - Enter student details and marks
   - Display student results
   - Display the class report
   - Exit the program

Expected Output:

Student-wise result summary and class performance report including the name of topper along with their percentage.

Sample Output:

===== STUDENT RESULT AND GRADE ANALYZER =====

Enter number of students (1-10): 2

===== MENU =====

1. Enter Student Details
2. Display Student Results
3. Display Class Report
4. Exit

Enter your choice: 1

Enter name of student 1: Venya
Enter the marks for subject 1: 85
Enter the marks for subject 2: 90
Enter the marks for subject 3: 80
Enter the marks for subject 4: 75
Enter the marks for subject 5: 95

Enter name of student 2: Kirti
Enter the marks for subject 1: 70
Enter the marks for subject 2: 75
Enter the marks for subject 3: 80
Enter the marks for subject 4: 65
Enter the marks for subject 5: 85

Student data entered successfully!

===== MENU =====

1. Enter Student Details
2. Display Student Results
3. Display Class Report
4. Exit

Enter your choice: 2

====== STUDENT RESULT ======

Name: Venya
Total: 425.00 /500
Percentage: 85.00%
Grade: A
STATUS: PASS

Name: Kirti
Total: 375.00 /500
Percentage: 75.00%
Grade: B+
STATUS: PASS

===== MENU =====

1. Enter Student Details
2. Display Student Results
3. Display Class Report
4. Exit

Enter your choice: 3

===== CLASS REPORT =====

Topper: Venya
Topper percentage: 85.00%

Class average: 80.00%

===== MENU =====

1. Enter Student Details
2. Display Student Results
3. Display Class Report
4. Exit

Enter your choice: 4

Exiting program..

