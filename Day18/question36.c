//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int c = b;
        b = a % b;
        a = c;
    }

    return a;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d\n", gcd(a, b));

    return 0;
}