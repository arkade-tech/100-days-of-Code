//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main(){
    int a  ;
    printf("Size of Array ");
    scanf("%d",&a);
    
    int f[a];
    printf("Enter Elements of Array ");
    for( int i = 0 ;i < a;i++){
        scanf("%d",&f[i]);

    }
	
int even = 0;
int odd = 0;
for( int i = 0 ;i < a;i++){
	if(f[i] % 2 == 0)
	{
		even++;
	}
	else
	{
	odd ++;	
	}

}
			
		printf("Even = %d, Odd = %d",even,odd);			
    return 0;
}
