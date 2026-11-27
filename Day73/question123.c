//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int ch, last = '\n';
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        last = ch;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    // If last line does not end with \n
    if (characters > 0 && last != '\n')
        lines++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}