/* Faça um programa que determine se um determinado ano lido é bissexto. Um ano é bissexto se for
divisível por 400, ou se for divisível por 4 e não for divisível por 100. Seu programa deve imprimir apenas
as respostas “sim” ou “nao”. */

#include<stdio.h>
//start of the program
int main()
{
	int a, b;
	printf("Enter the year:\n");
	scanf("%d", &a);
	a = a % 4;
	b = a % 100;
	if ( a == 0 && b == 0)
	{
		printf("sim\n");
	}
	else 
	{
		printf("nao\n");
	}

	return 0;
}
