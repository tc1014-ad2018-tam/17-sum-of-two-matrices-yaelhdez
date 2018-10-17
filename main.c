//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>


/*
 * Write a program that reads two matrices of n x n elements each.
 * Produce a third matrix with the sum of both matrices.
 * n should be greater than 1 and less than or equals to 10.
 */

int main() {
    int length; //lenght variable

    do {
        printf("Size of array n*n:");
        scanf("%d", &length); //lenght of the array request

        if (length<1 || length>10){ //notice the user that he/she needs to write a value between 1 and 10
            printf("\nThe size of the array needs to be a value between 1 and 10\n");
        }
    }while(length<1 || length>10); //This loop obligate the user to enter a value between 1 and 10

    int a[length][length];
    int b[length][length];
    int c[length][length];

    // Total size of 2D matrice
    int totalSize = length * length;
    int count = 0; // Stores the current number displayed on console

    printf("\nPlease write %d int numbers for matrix A.\n", totalSize);
    for (int x = 0; x < length; x++) { // Iterate through main index
        for (int y = 0; y < length; y++) { // Iterate through sub index
            // Adds 1 to count and then prints it asking for an input
            printf("Number %d =", ++count);
            scanf("%d", &a[x][y]);
        }
    }

    // Resets counter
    count = 0;

    // Same job as before...
    printf("\nPlease write %d int number for matrix B.\n", totalSize);
    for (int x = 0; x < length; x++) {
        for (int y = 0; y < length; y++) {
            printf("Number %d =", ++count);
            scanf("%d", &b[x][y]);

            // Adding all numbers and saving them into C matrix
            c[x][y] = a[x][y] + b[x][y];
        }
    }

    // Now, iterate through C and print all its values
    printf("\nSum of the elements of A and B:\n");
    for (int x = 0; x < length; x++) {
        for (int y = 0; y < length; y++) {
            printf("%d + %d = %d\n", a[x][y], b[x][y], c[x][y]);
        }
    }

    return 0;
}