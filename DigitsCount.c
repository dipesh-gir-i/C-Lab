// Write a C program that accepts a positive integer from the user and counts the number of digits in it 
#include <stdio.h>

int main(void) {
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 0) {
        count = 1;
    } 
    else {
        while (num != 0) {
            num /= 10;   
            count++;     
        }
    }
    printf("\n The number of digits in the number is %d\n", count);

    return 0;
}
