//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
	
int positive = 0;
int negative = 0;
int zero = 0;
for( int i = 0 ;i < a;i++){
	if(f[i] > 0)
	{
		positive ++;
	}
	else if(f[i] < 0)
	{
	negative ++;	
	}
	else
	{
	zero++;	
	}

}
			
		printf("Positive = %d, Negative = %d, Zero = %d",positive,negative,zero);			
    return 0;
}

