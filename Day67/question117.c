//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>

void merge(int a[], int m, int b[], int n, int c[])
{
    int i = 0, j = 0, k = 0;

    // Compare elements of both arrays
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    // Copy remaining elements of first array
    while (i < m)
        c[k++] = a[i++];

    // Copy remaining elements of second array
    while (j < n)
        c[k++] = b[j++];
}

int main()
{
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter first sorted array: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n], c[m + n];

    printf("Enter second sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    merge(a, m, b, n, c);

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++)
        printf("%d ", c[i]);

    return 0;
}