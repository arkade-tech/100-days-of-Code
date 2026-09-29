//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    int ch;
	int vowels = 0;
	int consonants = 0;
    ch = getchar();

    while (ch != '\n' && ch != EOF) {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' ||ch == 'O' || ch == 'U')
{
    vowels++;
}
	else
	consonants++;
      ch = getchar();
         }
printf("Vowels=%d, Consonants=%d",vowels,consonants);

    return 0;
}
