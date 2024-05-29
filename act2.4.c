/* Faça um programa que receba um número inteiro e informe se este número é par ou ímpar. Imprima
apenas as palavras “par” ou “impar” em sua resposta. */

#include<stdio.h>
//start of the program
int main()
{
	int a;
	printf("Enter an entire number:");
	scanf("%d", &a);
	if (a % 10 == 1 || a % 10 == 3 || a % 10 == 5 || a % 10 ==  7 || a % 10 == 9)
	{
		printf("Impar\n");
	}
	else if(a % 5 == 0 || a % 5 == 2 || a % 5 == 4 || a % 5 == 6 || a % 5 == 8 || a % 5 == 10)
	{
		printf("Par\n");
	}
	
	return 0; 
}
