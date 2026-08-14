//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main(){
	float p ,r ,t,x,y,z;
	printf("Enter the principal :-");
	scanf("%f",&p);
	
	printf("Enter the rate of interest :-");
	scanf("%f",&r);
	
	printf("Enter the time :-");
	scanf("%f",&t);
	
	z = (p*r*t)/100;
	
	x = p * pow((1 + (r/100.0)), t);
	
	y = x - p;
	
	
	printf("Simple Interest=%.0f,\t Compound Interest=%.3f",z,y);

	return 0;}

