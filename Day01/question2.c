//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main(){
	int a , b , s ;
	
	// Input two numbers
	printf("Enter two numbers :-");
    scanf("%d %d", &a, &b);
    
    //Calculate Sum
    s = a + b;
    
    //Display the result for sum
    printf("Sum = %d\n", s);
    
    //Calculate the Difference
    printf("Diff = %d\n", a - b);
    
    //Calculate the Product
    printf("Product = %d\n", a * b);
    
    
    //Calculate the Quotient
    if(b != 0){
        printf("Quotient=%d\n", a / b);
    }
    else {
        printf("Quotient=Undefined (Division by zero)\n");
    }
    
    
	return 0;
}
