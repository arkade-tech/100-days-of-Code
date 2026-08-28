//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>
void sum(int n){
    int i = 0, s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
        i++;
    }
    printf("Sum is = %d",s);
    return;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    sum(num);
    return 0;
}