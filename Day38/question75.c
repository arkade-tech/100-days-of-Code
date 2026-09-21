//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main(void) {

    int m, n, p, q;

    /*
        m = rows of first matrix
        n = columns of first matrix

        p = rows of second matrix
        q = columns of second matrix
    */

    // Size of first matrix
    printf("Enter Rows of First Matrix: ");
    scanf("%d", &m);

    printf("Enter Columns of First Matrix: ");
    scanf("%d", &n);

    int ar1[m][n];

    // Input first matrix
    printf("Enter first matrix elements:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &ar1[i][j]);
        }
    }

    // Print first matrix
    printf("\nThe First Matrix is:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", ar1[i][j]);
        }
        printf("\n");
    }


    // Size of second matrix
    printf("\nEnter Rows of Second Matrix: ");
    scanf("%d", &p);

    printf("Enter Columns of Second Matrix: ");
    scanf("%d", &q);

    int ar2[p][q];

    // Input second matrix
    printf("Enter second matrix elements:\n");

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &ar2[i][j]);
        }
    }

    // Print second matrix
    printf("\nThe Second Matrix is:\n");

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", ar2[i][j]);
        }
        printf("\n");
    }

    // Add matrices
    int sum[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            sum[i][j] = ar1[i][j] + ar2[i][j];

        }
    }


    // Print result
    printf("\nSum of Matrix:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
