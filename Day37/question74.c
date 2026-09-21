//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main() {


    int a, b;
    printf("Enter row and column size of matrix: ");
    scanf("%d %d", &a, &b); 


    int f[a][b];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &f[i][j]);
        }
    }


    printf("\nThe Matrix is:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%2d", f[i][j]); 
        }
        printf("\n"); 
    }

    //dimensions for the transpose matrix
    int transpose[b][a]; 

    // Calculationg the transpose
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            transpose[j][i] = f[i][j];
        }
    }

    // Printing the result
    printf("Transposed Matrix:\n");
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
        return 0;
    }