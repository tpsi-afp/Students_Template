#include <stdio.h> 
#include <stdlib.h>
#include "student.h"
#include "input.h"

int main() {
   
    Student students[200];

    int numberStudents = loadStudents("students.csv", students, 200);

    for(int i=0; i < numberStudents; i++) {
        printf("Student[%2d]: %s \n", i, students[i].name);
    }

    return EXIT_SUCCESS;
}
