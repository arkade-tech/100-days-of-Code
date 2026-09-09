//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

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
	
	int max ;
	max = f[0];
	for(int i = 1; i < a;i++){
			
			if(f[i] > max){
				max = f[i];
				}
			}
			printf("Max is %d, ",max);



	int min;
	min = f[0];
  	for(int i = 1; i < a;i++){
			
			if(f[i] < min){
				min = f[i];
				}
			}
			printf("Min is %d",min);
			
			
    return 0;
}

