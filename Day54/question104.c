//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

/*

Explanation 3:
It can be proved that no such integer exists.
Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    long long sum, pivot;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("-1\n");
        return 0;
    }

    sum = (long long)n * (n + 1) / 2;

    pivot = (long long)sqrtl((long double)sum);

    if (pivot * pivot == sum)
    {
        printf("%lld\n", pivot);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}