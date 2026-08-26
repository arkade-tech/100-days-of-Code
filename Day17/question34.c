//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

void prime(int n)
{
    int i, count = 0;

    if (n <= 1)
    {
        printf("Not prime");
        return;
    }

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime");
    else
        printf("Not prime");
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    prime(n);

    return 0;
}