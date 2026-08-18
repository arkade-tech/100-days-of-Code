//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>
int main(){
	double r1,r2,b,a,c,z;
	printf("Enter the coefficient:-");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	
	z = ((b*b)-4*a*c);
	
	r1 = ((-b + pow((z),0.5))/(2*a));
	
	r2 = ((-b - pow((z),0.5))/(2*a));
	
	if(r1 != r2 && z > 0 ){
		printf("Roots are real and different: %.0lf, %.0lf",r1,r2);}
	else if(r1 == r2 && z == 0 ){
		printf("Roots are real and same: %.0lf",r1);}
	else{
		printf("Roots are complex");}
	
	
	return 0;}
