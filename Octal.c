/*Write a program to convert a positive decimal number to its octal equivalent using a function having the following function prototype:
int to_octal(int);
The function will take a decimal number (an integer) as a parameter. The function returns the octal equivalent number (an integer).
You can write a main function in the same file that takes an integer as input and calls the function with the integer as an argument. 
The program could then print the octal equivalent number depending on the function's return value.
You can use the following algorithm for decimal to octal conversion:
Step 1: Initialize the octal equivalent number (octal) to 0.
Step 2: Initialize equivalent octal index location counter (I) to 1.
Step 3: Until the decimal integer number (n) does not become 0, repeat the following steps:
        a. Find the remainder (r) obtained if the number is divided by 8 (use the modulus operator).
        b. Update the decimal number (n) using the following formula: n=n/8
        c. Update the octal equivalent number (octal) using the formula: octal = octal + r*i
        d. Update the equivalent octal index location counter (I) by multiplying itself by 10.
Step 4: Return the octal equivalent number (octal).
*/

#include <stdio.h>

int to_octal(int n) {
    int octal = 0;  
    int i = 1;    
    while (n != 0) {
        int r = n % 8;    
        n = n / 8;        
        octal = octal + r * i;  
        i = i * 10;       
    }

    return octal;  
}

int main() {
    int decimal;
    printf("Enter the decimal number:\n");
    scanf("%d", &decimal);
    int octal = to_octal(decimal);
    printf("The octal equivalent is: %d\n", octal);
    return 0;
}
