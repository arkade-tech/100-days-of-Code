//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/#
#include <stdio.h>
int strong(int n){
    int q,f=1,s=0,r,i;
    if(n == 0){
        printf("Not strong number");
        return 0;
    }
    q = n;
    while (q != 0)
    {
        r = q % 10;
        for (i = 1; i <= r; i++)
        {
           f = f*i;
        }
        s = s + f;
        f = 1;
        q /= 10;
        
    }
    if(n == s)
    {
        printf("Strong Number");
    }
    else
    {
    printf("Not strong number");
    }
return s;    
}
int main(){
    int a;
    scanf("%d",&a);
    strong(a);
    return 0;
}