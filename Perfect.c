/*A perfect number is a positive number equal to the sum of its proper divisors, excluding the number itself.
Write a C function with the following function prototype:
int perfect(int);
The function returns 1 if the argument is a perfect number and 0 otherwise.
The algorithm to check whether a number is perfect or not is given below.
Step 1: Read the number(n)
Step 2: Initialize the sum(s) to 0
Step 3: For all integers (k) between and including 1 and n-1, do the following:
        a. If the integer (k) divides the number (n) perfectly, then add the integer (k) to sum (s).
        b. If the sum(s) and the number(n) are equal then return 1 else return 0.
You can write a main function in the same file that takes the integer n as an input and calls the function with it as an argument.
The program could then print whether the number is perfect or not based on the returned value of the function. */

#include <stdio.h>

int perfect(int n) {
    int sum = 0;
    for (int k = 1; k < n; k++) {
        if (n % k == 0) {
            sum += k;
        }
    }
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    if (perfect(n)) {
        printf("The number is a perfect number.\n");
    } else {
        printf("The number is not a perfect number.\n");
    }

    return 0;
}
