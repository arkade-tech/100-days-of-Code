//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main(){
    int b ;
    printf("Size of an array ");
    scanf("%d",&b);
    int a[b];
    printf("Enter Elements of array \n");
    for(int i = 0;i<b;i++){
        scanf("%d",&a[i]);
    }
    int result = -1;
	
	int l;
	printf("Element want to find - ");
    scanf("%d",&l);
	int low=0,mid,high=(b-1);
	while(low<=high){
	mid = (low+high)/2;
	if(a[mid] == l){
        result = mid;
        break;
    }
	if(a[mid] < l)
	low = mid +1;
	else
	high = mid -1;
		}

	if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("-1\n");
    }
    return 0;
}