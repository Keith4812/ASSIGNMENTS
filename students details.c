/*
NAME:KEITH BARRACK OJUANG
REG NO:PA106/G/29044/25
DESCRIPTION:PROGRAM FOR ENTERING STUDENTS DETAILS
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    char regNo[10];
    float marks;
};

int main() {
	
    FILE * fp;
    struct Student s;

    fp = fopen("results.dat", "rb"); 
	
    if (fp == NULL) {
        printf("Error in opening file!\n");
        
    }

     printf("Enter the student name: ");
    scanf(" %[^\n]", s.name);
    
    printf("Enter the registration number: ");
    scanf(" %[^\n]", s.regNo);
    
    printf("Enter total marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, fp);

    fclose(fp);
    printf("Student record has been added successfully!\n");
    
	return 0;
	
}