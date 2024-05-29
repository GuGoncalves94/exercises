/* Faça um programa que receba quatro números e mostre qual deles é o menor. */

#include<stdio.h>
//start of the program
int main()
{
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if (a < b && a < c  && a < d)
	{ 
		printf("%.2f\n", a);
	}
	else if (b < a && b < c && b < d)
	{
		printf("%.2f\n", b);
	}
	
	else if (c < a && c < b && c < d)
	{
		printf("%.2f\n", c);
	}
	else if (d < a && d < b && d < c)
	{
		printf("%.2f\n", d);
	}
	return 0;
}
