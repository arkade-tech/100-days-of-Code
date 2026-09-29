//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() {
    int ch;
    int length = 0;

    ch = getchar();

    while (ch != '\n' && ch != EOF) {
        length++;
        ch = getchar();
    }

    printf("%d\n", length);

    return 0;
}
