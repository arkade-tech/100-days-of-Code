//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>
int main(){

  int a ,s = 1,i;
  printf("Even numbers between 1 and n:- ");
  scanf("%d",&a);

  for( i=1; i<=a; i++)
    {
        if (i % 2 == 0)
        {
            s = s * i;
        }
        
    }
printf("Product of even numbers is: %d (", s);
    for (int j = 2; j <= a; j += 2) {
        printf("%d", j);{
            if(j + 2 <= a) {
                printf(" * ");
            }
        }
    }
    printf(")\n");
return 0;
}

