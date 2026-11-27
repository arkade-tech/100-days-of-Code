//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int maxLength = 0;

    printf("Enter a string: ");
    scanf("%99s", s);

    int n = strlen(s);

    // Start substring from each character
    for (int i = 0; i < n; i++)
    {
        int visited[256] = {0};
        int length = 0;

        // Check characters from position i
        for (int j = i; j < n; j++)
        {
            unsigned char ch = s[j];

            // If character is already present
            if (visited[ch] == 1)
            {
                break;
            }

            visited[ch] = 1;
            length++;

            // Update maximum length
            if (length > maxLength)
            {
                maxLength = length;
            }
        }
    }

    printf("Length of longest substring = %d\n", maxLength);

    return 0;
}