/* Write a C program that calculates and prints the Highest Common Factor of the two integers taken as input. */
#include <stdio.h>
int main() {
    int num1, num2, hcf, temp;
    printf("Enter the value of two numbers:\n");
    scanf("%d %d", &num1, &num2);
    int a = num1;
    int b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    printf("The HCF is %d\n", hcf);
    return 0;
}
