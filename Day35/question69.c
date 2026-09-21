//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int second = a[0];

    // Find largest
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    // Find second largest
    for (int i = 0; i < n; i++) {
        if (a[i] > second && a[i] < largest) {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}