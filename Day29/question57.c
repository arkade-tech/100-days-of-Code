//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>
int main(){
    int a , i = 1 , f[i],s = 0;
    printf("Size of Array ");
    scanf("%d",&a);
    printf("Enter Elements of Array ");
    for( i = 1 ;i <= a;i++){
        scanf("%d",&f[i]);

    }
    for (int i = 1; i <= a; i++)
    {
		 s += f[i];

    }
            printf("%d ", s);
    return 0;
}
