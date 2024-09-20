/* Write a C program that accepts the number of cases (n) from the user. The program then asks the user to enter n numbers 1 by 1, and for each provided number, it prints whether the number is even or odd */
#include <stdio.h>
int main() {
    int n, num;
    printf("Enter the number of cases: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("The number is even \n");
        } 
        else {
            printf("The number is odd \n");
        }
    }

    return 0;
}
