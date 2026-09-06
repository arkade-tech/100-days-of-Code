//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

#include <stdio.h>
int main(){
    int a , i = 1 , f[i];
    printf("Size of Array ");
    scanf("%d",&a);
    printf("Enter Elements of Array ");
    for( i = 1 ;i <= a;i++){
        scanf("%d",&f[i]);

    }
    for (int i = 1; i <= a; i++)
    {
        printf("%d ", f[i]);
    }
    return 0;
}


