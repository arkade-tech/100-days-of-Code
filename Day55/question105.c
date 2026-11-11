//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Array Size ");
    // Read array size
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    // Allocate the array on the heap
    int *nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("-1\n");
        return 0;
    }
    printf("Nums ");
    // Read array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("-1\n");
            free(nums);
            return 0;
        }
    }

    // Phase 1: find a candidate (Boyer-Moore voting)
    int candidate = 0;
    int votes = 0;

    for (int i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = nums[i];
            votes = 1;
        } else if (nums[i] == candidate) {
            votes++;
        } else {
            votes--;
        }
    }

    // Phase 2: verify that the candidate is really a majority
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    free(nums);
    return 0;
}