//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main(){
	int a , b ;
	
	// Input two length and breadth
	printf("Enter length of Rectangle :- ");
    scanf("%d",&a);
    
	printf("Enter breadth of Rectangle :- ");
    scanf("%d",&b);
    
    //Calculate the Area and Perimeter of Rectangle
    printf("Area = %d, \t Perimeter = %d",a * b, 2 * (a + b));
    
	return 0;
	}
