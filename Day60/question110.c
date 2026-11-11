//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/


#include <stdio.h>

int main() {
    int n, k;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 0;
        }
    }

    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        return 0;
    }

    for (int i = 0; i + k <= n; i++) {
        int max = arr[i];

        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        if (i > 0) {
            printf(" ");
        }
        printf("%d", max);
    }
    printf("\n");

    return 0;
}