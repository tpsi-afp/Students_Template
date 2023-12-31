#pragma once

typedef struct student {
    char name[200];
    char number[12];
    int grade;
} Student;

typedef Student* PtStudent; // You can use (PtStudent) instead of (Student*)

/**
 * @brief Creates and initializes a student
 * 
 * @param name [in] student name
 * @param number [in] student number
 * @param grade  [in] student grade
 * @return Student struct
 */
Student studentCreate(char *name, char *number, int grade);

/**
 * @brief Populates array with students.
 * 
 * The function returns how many students were actually populated.
 * This is important if 'arrLength' is greater than available students.
 * 
 * Should use the return value to iterate the array afterwards.
 * 
 * @param filename [in] the filename of the CSV file containing the student's information
 * @param arr [out] array of students to populate. Must have necessary space.
 * @param arrLength [in] maximum number of students that can be loaded
 * @return int actually number of populated students.
 */
int loadStudents(char *filename, Student arr[], int arrLength);