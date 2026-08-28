//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>
void factor(int n){
    for(int i = 1;i <= n ;i++)
    if (n % i == 0)
    {
        printf("%d ",i);
    }
    return ;
}


int main(){
    int a;
    printf("Enter the number:-");
    scanf("%d",&a);
    factor(a);    
}