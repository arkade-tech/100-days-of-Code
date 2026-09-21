//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);

    int a[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Number of rotations
    scanf("%d", &k);

    // Rotate right by k positions
    for (int r = 0; r < k; r++) {

        int last = a[n - 1];

        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }

        a[0] = last;
    }

    // Print array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}