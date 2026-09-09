//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

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
	
		int z;
		printf("Element want to find - ");
        scanf("%d",&z);
        
for( int i = 0 ;i < a;i++){
	if(f[i] == z)
	{
		printf("Found at index %d",i);
		return 0;
	}

}
	printf("-1\n");
    return 0;
}
