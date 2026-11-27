//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

//An anagram means two words contain exactly the same letters with the same frequency, but the letters can be in a different order.

#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[])
{
    int freq[26] = {0};

    if (strlen(s) != strlen(t))
        return 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    char s[100], t[100];

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    if (isAnagram(s, t))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}