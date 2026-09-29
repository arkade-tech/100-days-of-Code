//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main() {
    int ch;

    ch = getchar();

    while (ch != '\n' && ch != EOF) {
        printf("%c\n", ch);
        ch = getchar();
    }

    return 0;
}
