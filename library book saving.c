/*
NAME:KEITH BARRACK OJUANG
REG NO:PA106/G/29044/25
DESCRIPTION:A PROGRAM TO DISPLAY SUCCESSFULLY SAVED BOOKS
*/

#include <stdio.h>

int main() {
    FILE * fp;
    char title[100];

    fp = fopen("borrowed_Books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the  book borrowed: ");
    fgets(title, sizeof(title), stdin);
	
	
	 // read input with spaces
    fprintf(fp, "%s", title);
	
	 // store the book title in file
    fclose(fp);
    printf(" The book title has been successfully stored in borrowed_books.txt\n");

    return 0;
    
}

