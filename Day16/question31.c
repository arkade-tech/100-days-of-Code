//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/


#include <stdio.h>
int main(){
  int a;
  printf("Enter a decimal number :- ");
  scanf("%d", &a);
  int b[32];
  int i = 0;
  while(a > 0){
    b[i] = a % 2;
    a = a / 2;
    i++;
  }
  for (int j = i - 1; j >= 0; j--)    //To print from right to left
  {
    printf("%d", b[j]);
  }
  return 0;
}
