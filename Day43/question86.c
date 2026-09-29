//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }

    rev[len] = '\0';

    if(strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
