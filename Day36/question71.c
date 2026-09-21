//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>
int main(){
    int r,m;
    printf("Enter the Row and Column of Matrix ");
    scanf("%d %d",&r,&m);
    int mat[r][m];
    printf("Enter the elements of Matrix ");
    for (int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < m; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("The Result Matrix is \n");
    for (int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < m; j++){
            printf("%2d",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}