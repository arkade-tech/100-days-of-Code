//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,z;
	printf("Enter cost price:");
	scanf("%f",&a);
	
	printf("Enter cost selling:");
	scanf("%f",&b);
	
	c = (((b - a)/a)*100);
	c = fabs(c);
	
	if(c>0){
		
	printf("Profit %.0f%%",c);}
	else if(c <0){
		
	printf("Loss %.0f%%",c);}
	else{
		printf("No Profit No Loss");}
	
	return 0;
	}
