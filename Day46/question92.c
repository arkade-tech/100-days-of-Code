//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j, found = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {

            if(str[i] == str[j]) {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        if(found == 1)
            break;
    }

    return 0;
}
