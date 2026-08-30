//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
 void swap(int n){
    int last_digit = n % 10;
    int first_digit = n;
    int divisor = 1;
    while (first_digit >= 10)
    {
        first_digit = first_digit/10;
        divisor = divisor * 10;
    }
    int middle_part = (n % divisor) / 10;
    int swapped = (last_digit*divisor)+(middle_part*10)+first_digit;
    printf("Swapped = %d",swapped);
    return;
}
 int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    swap(a);
    return 0;
 }
