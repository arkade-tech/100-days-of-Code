//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter Size of First Array ");
    scanf("%d",&a);
    int arr1[a];
    printf("Enter array elements ");
    for(int i = 0;i<a;i++ ){
        scanf("%d",&arr1[i]);
    }

    int b;
    printf("Enter Size of Second Array ");
    scanf("%d",&b);
    int arr2[b];
    printf("Enter array elements ");
    for(int i = 0;i<b;i++ ){
        scanf("%d",&arr2[i]);
    }
    
    // Calculate the size of both arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;
    
    int merged[size3];

    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    printf("Merged Array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}