//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int findRepeated(int arr[], int n)
{
    int freq[100] = {0};

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
            return arr[i];

        freq[arr[i]] = 1;
    }

    return -1;
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Repeated element = %d\n", findRepeated(arr, n));

    return 0;
}