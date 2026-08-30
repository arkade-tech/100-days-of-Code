//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
void binary(int n){
	int temp, rev = 0;
    int digits = 0;
	temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    for (int i = 0; i < digits; i++) {
        if (rev % 10 == 0)
            printf("1");
        else
            printf("0");

        rev /= 10;
    }
return;
	}

int main() {
    int b;
	printf("Enter binary number:-");
    scanf("%d", &b);
    binary(b);
    return 0;
}
