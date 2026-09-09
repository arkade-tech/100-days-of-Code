//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>
int main(){
    int z;
    int a  ;
    printf("Size of Array ");
    scanf("%d",&a);
    
    int f[a];
    printf("Enter Elements of Array ");
    for( int i = 0 ;i < a;i++){
        scanf("%d",&f[i]);

    }
    int b;
    b = (a-1);
    for(int i = 0; i< (a / 2);i++)
    {
            z = f[i];
            f[i] = f[b];
            f[b] = z;
            b--;
            
          }
    {
		for(int i = 0;i <a ; i++)
        printf("%d\t",f[i]);
    }
    return 0;
}
