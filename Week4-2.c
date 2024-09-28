/*Write a C program that accepts a stream of characters until the user enters EOF. For each input character the program should perform the following operation 
--> If the input character is lowercase, convert it to uppercase and vice versa
--> Otherwise, print is not an alphabet. */

#include <stdio.h>
int main() {
    int c;
    printf("Enter characters and press Ctrl+D for EOF: \n");
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            continue;
        }
        if (c >= 'a' && c <= 'z') {
            putchar(c - ('a' - 'A'));
        }
        else if (c >= 'A' && c <= 'Z') {
            putchar(c + ('a' - 'A'));
        }
        else {
            printf("%c is not an alphabet \n", c);
        }
    }
    printf("\n End of input. \n");
    return 0;
}
