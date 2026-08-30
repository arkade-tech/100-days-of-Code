//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Read input number
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    // A perfect number must be positive and greater than 1
    if (num <= 1) {
        printf("Not perfect number\n");
        return 0;
    }

    // Find all proper divisors and add them
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of proper divisors equals the number
    if (sum == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}