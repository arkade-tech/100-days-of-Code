//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>
int main(){
    float n ,j,s=0;
    printf("Enter n th element: ");
    scanf("%f",&n);
    for(j = 0 ; j <= n ; j++){
        s += (2*j)/(4*j-1);
    }
    printf("%.2f",s);
    return 0;
}