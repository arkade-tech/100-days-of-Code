//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

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

int lcm(int a, int b){
    return (a * b)/gcd(a,b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d\n", lcm(a, b));

    return 0;
}