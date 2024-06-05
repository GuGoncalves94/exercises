/* Faça um programa que receba a altura (valor real) e o sexo (m ou f) de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7 */

#include<stdio.h>
//start of the program
int main()
{
	float a;
	char gen;
	printf("Enter your height:\n");
	scanf("%f", &a);
	printf("Enter your gender (M/F):\n");
	scanf(" %c", &gen);
	if(gen == 'm')
	{
		a = 72.7 * a - 58;
		printf("%2f\n", a);
	}
	else if(gen == 'f')
	{
		a = 62.1 * a -44.7;
		printf("%2f\n", a);
	}

	return 0;
}
