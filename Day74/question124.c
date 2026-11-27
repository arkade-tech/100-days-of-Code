//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char data[1000];
    int i = 0, ch;

    // Read from source.txt
    fp = fopen("source.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        data[i] = ch;
        i++;
    }

    fclose(fp);

    // Write to destination.txt
    fp = fopen("destination.txt", "w");

    for (int j = 0; j < i; j++)
    {
        fputc(data[j], fp);
    }

    fclose(fp);

    printf("File copied successfully");

    return 0;
}