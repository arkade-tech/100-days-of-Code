//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>
void armstrong(int n){
    int a,r,s=0;
    a=n;
    while (a !=0)
    {
       r = a%10;
       s += pow(r,3);
       a = a/10;     

    }
    if(n==s){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
return  ;
    
}
int main(){
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);
    armstrong(n);
    
    return 0;

}