/*Write a C program that takes a positive integer as a user input and prints whether it is an Armstrong number or not. */
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;
    printf("Enter the number: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if ((int)result == num) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}
