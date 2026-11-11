//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

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
        printf("-1\n");
        return 0;
    }

    // Sum of the first window (first k elements)
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;

    // Slide the window to the right
    for (int i = k; i < n; i++) {
        windowSum += arr[i];      // new element enters
        windowSum -= arr[i - k];  // old element leaves
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%d\n", maxSum);
    return 0;
}