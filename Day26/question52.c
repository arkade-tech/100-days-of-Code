/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main() {

    // 1 star
    printf("*\n\n");

    // 3 stars
    for (int i = 1; i <= 3; i++)
        printf("*\n");
    printf("\n");

    // 5 stars
    for (int i = 1; i <= 5; i++)
        printf("*\n");
    printf("\n");

    // 3 stars
    for (int i = 1; i <= 3; i++)
        printf("*\n");
    printf("\n");

    // 1 star
    printf("*\n");

    return 0;
}