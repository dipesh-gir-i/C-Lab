/* Write a C program that takes two positive integer numbers, X and Y, as user inputs and prints the even numbers between them. If X>Y, then the program should print, "No even numbers are possible"*/
#include <stdio.h>
int main() {
    int X, Y, i;
    printf("Enter the values of X and Y: ");
    scanf("%d %d", &X, &Y);
    if (X > Y) {
        printf("No even numbers are possible\n");
    } else {
        printf("The even numbers are: ");
        int foundEven = 0;
        for (i = X; i <= Y; i++) {
           
            if (i % 2 == 0) {
                printf("%d ", i);
                foundEven = 1;
            }
        }
        if (!foundEven) {
            printf("None");
        }
        printf("\n");
    }
    return 0;
}
