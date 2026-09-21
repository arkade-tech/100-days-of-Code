//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, pos;

    scanf("%d", &n);

    int a[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Position to delete
    scanf("%d", &pos);

    // Shift elements to the left
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    // Print array
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}