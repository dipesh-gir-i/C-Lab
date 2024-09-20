// Write  a C program that takes a positive integer value N as user input. The program then takes as input N integer numbers from the user. The program then prints the largest and smallest number.
#include <stdio.h>

int main() {
    int N, num;
    int largest, smallest;

    printf("Enter the value of N:\n");
    scanf("%d", &N);

  if (N <= 0) {
        printf("N must be a positive integer.\n");
        return 1;
    }

  
    printf("Enter the %d values:\n", N);

    scanf("%d", &num);
    largest = smallest = num;

    
    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }

    
    printf("The largest value is %d, and the smallest value is %d\n", largest, smallest);

    return 0;
}
