
/*
NAME:KEITH BARRACK OJUANG
REG NO:PA106/G/29044245
DESCRIPTION:PROGRAM TO DISPLAY THE SALES OF THE DAY
*/

#include <stdio.h>

int main() {
	
    FILE * fp;
    float amount, total = 0;

    fp = fopen("sales.txt", "r");
	
	 // open for reading
    if (fp == NULL) {
        printf("Error in opening the file!\n");
    }

    while (fscanf(fp, "%f", &amount) == 1) {
    	
        total += amount;
    }

    fclose(fp);
    printf("The total Sales for the Day: %.2f\n", total);

    return 0;
}



