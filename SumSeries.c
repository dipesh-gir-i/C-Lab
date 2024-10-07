/* Write a C function with the following prototype:
int SumSeries(int a, int n);
The function computes and returns the value of the series a^n + a^(n-1) + .. + a^1 + 1.
You can write the main function in the same file that takes the two integers a and n as input and calls the function with them as arguments. 
The program could then print the returned  value of the function. */

#include <stdio.h>

int SumSeries(int a, int n) {
    int sum = 1; 
    int term = 1; 

    for (int i = 1; i <= n; i++) {
        term *= a; 
        sum += term;
    }
    return sum;
}

int main() {
    int a, n;
    printf("Enter the values of a and n:\n");
    scanf("%d %d", &a, &n);
    int result = SumSeries(a, n);
    printf("The sum of the series is: %d\n", result);
    return 0;
}
