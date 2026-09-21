//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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

    int sum[a] ;
    for(int i = 0; i < a ; i++){
        sum[i] = 0;
        for(int j = 0;j < b;j++){
            sum[i] += f[i][j];
        }
    }
    printf("The Sum of all elements \n");
    for (int i = 0; i < a; i++){
        printf("%d ",sum[i]);

    }
    return 0;
}