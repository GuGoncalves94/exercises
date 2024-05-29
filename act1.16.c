/* Usando apenas duas variáveis, faça um programa que leia 3 números e compute a média entre eles. */

#include<stdio.h>
//start of the program
int main()
{
	float a, b;
	//first print on the screen
	printf("Enter three values:\n");
	scanf("%f", &a);
	b = a;
	scanf("%f", &a);
	b = b + a;
	scanf("%f", &a);
	b = b + a;
	b = b / 3;
	//second print on the screen
	printf("%.1f\n", b); 

	return 0;
}
