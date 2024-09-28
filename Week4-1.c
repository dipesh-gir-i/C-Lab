/*Write a C program to read a continuous stream of characters(use getchar()) and print the characters (use putchar()). The program should halt when the user enter EOF.*/
#include <stdio.h>

int main() {
    int c;

    printf("Enter characters and press ctrl+D for EOF:\n");

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    printf("\nEnd of input.\n");
    return 0;
}