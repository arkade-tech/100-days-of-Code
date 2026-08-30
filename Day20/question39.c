//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
void odd(int n){
	int  temp, rev = 0, digit;
    int product = 1, has_odd = 0;
    if (n < 0) {
        n = -n;
    }
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if (!has_odd) {
        printf("1 (no odd digits, assume 1)\n");
    } else {
        printf("%d (", product);
        
        int first = 1;
        while (rev > 0) {
            digit = rev % 10;
            if (digit % 2 != 0) {
                if (!first) {
                    printf("*");
                }
                printf("%d", digit);
                first = 0;
            }
            rev /= 10;
        }
        printf(")\n");
    }
return;
	}
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
	odd(n);
    
    return 0;
}
