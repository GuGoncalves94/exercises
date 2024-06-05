/* Faça um programa que receba dois números e mostre qual deles é o menor. */

#include<stdio.h>
//start of the program
int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	
	if (a < b) 
	{ 
		printf("%.2f\n", a);
	}
	else 
	{ 
		printf("%.2f\n", b);
	}
	
	return 0;
}
