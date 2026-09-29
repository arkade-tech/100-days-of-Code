//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i, j;
    char temp;

    scanf("%s", a);
    scanf("%s", b);

    if(strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }

    for(i = 0; a[i] != '\0'; i++) {
        for(j = i + 1; a[j] != '\0'; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i = 0; b[i] != '\0'; i++) {
        for(j = i + 1; b[j] != '\0'; j++) {
            if(b[i] > b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    if(strcmp(a, b) == 0)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
