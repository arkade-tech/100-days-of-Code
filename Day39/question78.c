//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {

    int r, c;

    scanf("%d %d", &r, &c);

    int a[r][c];

    // Input matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    // Sum of main diagonal
    for (int i = 0; i < r; i++) {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}