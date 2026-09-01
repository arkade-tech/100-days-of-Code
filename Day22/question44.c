//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>
int main(){
    float n, i , s=1;
    printf("Enter the terms:");
    scanf("%f",&n);
    for ( i = 2; i <= n ; i++)
    {
        s = s +((2*i-1)/(2*i));
    }
    
    printf("%.1f",s);
    return 0;
}
