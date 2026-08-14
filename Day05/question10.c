//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main(){
	int h,m,s,a,n;
	
	printf("Enter the seconds:");
	scanf("%d",&a);
	
	h = a / 3600;
	s = a % 3600;
	
	m = s / 60;
	n = s % 60;
	
	printf("\n Output in Hours:Minutes:Seconds");
	
	printf("\n %d : %d : %d",h,m,n);
	
	
	return 0;}
