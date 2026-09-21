//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

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

    int sum = 0;
    for(int i = 0; i < a ; i++){
        for(int j = 0;j < b;j++){
            sum += f[i][j];
        }
    }

    printf("The Sum of all elements = %d",sum);
    return 0;
}