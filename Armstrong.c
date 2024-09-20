/*Write a C program that takes a positive integer as a user input and prints whether it is an Armstrong number or not.*/
#include <stdio.h>
int main() {
    int num, originalNum, remainder, n = 0, power, i;
    int result = 0;
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
        power = 1;
        for (i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        originalNum /= 10;
    }
    if (result == num) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}
