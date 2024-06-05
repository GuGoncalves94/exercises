/* Faça um programa que leia um valor inteiro e informe se o valor lido é ou não é um múltiplo de 11. Seu
programa deve imprimir apenas as respostas “sim” ou “nao”. */

#include<stdio.h>
//start of the program
int main()
{
	int a;
	printf("Enter an entire number:\n");
	scanf("%d", &a);
	a = a % 11;
	if(a == 0)
	{
		printf("sim\n");
	}
	else if(a != 0)
	{
		printf("nao\n");
	}

	return 0;
}
