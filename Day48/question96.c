//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], *word;
    int i, len;

    fgets(str, 200, stdin);

    str[strcspn(str, "\n")] = '\0';

    word = strtok(str, " ");

    while(word != NULL) {
        len = strlen(word);

        for(i = len - 1; i >= 0; i--)
            printf("%c", word[i]);

        printf(" ");

        word = strtok(NULL, " ");
    }

    return 0;
}
