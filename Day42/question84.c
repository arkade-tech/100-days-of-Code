//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a string in lowercase: ");
    scanf("%[^\n]", str); 

    // Loop through the string until the null terminator '\0' is reached
    while (str[i] != '\0') {
        // Check if the current character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32
            str[i] = str[i] - 32;
        }
        i++; 
    }
    printf("Uppercase string: %s\n", str);

    return 0;
}
