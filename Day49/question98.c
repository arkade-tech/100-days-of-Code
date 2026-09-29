//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, last;

    fgets(str, 200, stdin);

    str[strcspn(str, "\n")] = '\0';

    last = strlen(str) - 1;

    while(str[last] != ' ')
        last--;

    printf("%c.", str[0]);

    for(i = 0; i < last; i++) {
        if(str[i] == ' ')
            printf("%c.", str[i + 1]);
    }

    printf(" %s", &str[last + 1]);

    return 0;
}
