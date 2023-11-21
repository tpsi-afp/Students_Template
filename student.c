#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "input.h"

Student studentCreate(char *name, char *number, int grade) {
    Student student;

    strcpy(student.name, name);
    strcpy(student.number, number);
    student.grade = grade;

    return student;
}

int loadStudents(Student arr[], int arrLength) {

    FILE* stream = fopen("students.csv", "r");

    int count = 0;
    char line[1024];
    while (fgets(line, 1024, stream))
    {
        if(count >= arrLength) break;

        char* tmp = strdup(line);
        
        char** tokens = splitString(tmp, 3, ";");
        
        int grade = atoi(tokens[2]);
        arr[count++] = studentCreate(tokens[0], tokens[1], grade);

	    free(tokens);
        free(tmp);
    }

    fclose(stream);

    return count;
}