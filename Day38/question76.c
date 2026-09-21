//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    int f[a][b];

    // Input matrix
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &f[i][j]);
        }
    }

    // Symmetric matrix must be square
    if (a != b) {
        printf("False");
        return 0;
    }

    int symmetric = 1;

    // Check a[i][j] == a[j][i]
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {

            if (f[i][j] != f[j][i]) {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0) {
            break;
        }
    }

    if (symmetric == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}