//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/     
#include <stdio.h>

int main() {
    int n, x;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element: ");
    scanf("%d", &x);

    int i = n - 1;

    // Move bigger elements one position right
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }

    // Insert element
    a[i + 1] = x;

    printf("New array: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}