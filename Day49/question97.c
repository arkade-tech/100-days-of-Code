//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    fgets(str, 200, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("%c.", str[0]);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            printf("%c.", str[i + 1]);
    }

    return 0;
}