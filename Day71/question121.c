//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>
int main(){
    FILE  *fptr;

    char name[50];
    int age;
    // Open file in write mode
    fptr = fopen("info.txt", "w");

    if(fptr == NULL){
        printf("File could not be created.\n");
        return 1;
    }

    // Take input
    printf("Enter name: ");
    scanf("%49s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    // Write data into file
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);

    // Close file
    fclose(fptr);

    printf("File created successfully! Data written to info.txt\n");


    return 0;
}