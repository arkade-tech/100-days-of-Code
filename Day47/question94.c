//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], *word, *longest;

    fgets(str, 200, stdin);

    word = strtok(str, " ");
    longest = word;

    while(word != NULL) {
        if(strlen(word) > strlen(longest))
            longest = word;

        word = strtok(NULL, " ");       //strtok() → separates a sentence into words
    }

    printf("%s", longest);

    return 0;
}