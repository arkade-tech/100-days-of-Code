//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {

    int m, n, p, q;

    // First matrix: m rows, n columns
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    int ar1[m][n];

    printf("Enter first matrix elements:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &ar1[i][j]);
        }
    }

    // Second matrix: p rows, q columns
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    int ar2[p][q];

    printf("Enter second matrix elements:\n");

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &ar2[i][j]);
        }
    }

    // Check whether multiplication is possible
    if (n != p) {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    // Result matrix will be m x q
    int product[m][q];

    // Matrix multiplication
    for (int i = 0; i < m; i++) {

        for (int j = 0; j < q; j++) {

            product[i][j] = 0;

            for (int k = 0; k < n; k++) {
                product[i][j] += ar1[i][k] * ar2[k][j];
            }
        }
    }

    // Print result
    printf("Product of two matrices:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}