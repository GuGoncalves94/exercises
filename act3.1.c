/* Faça um programa que leia um inteiro N e implemente um contador regressivo, para imprimir na tela os
números de N até 1. Imprima os números em uma única linha, separados entre si por um único espaço. */

#include<stdio.h>
//start of the program
int main()
{
	int n, i;
	
	printf("Enter an entire number:\n");
	scanf("%d", &n);
	
	i = 1;
	
	while ( i <= n )
 	{
 		printf("%d\n", n);
 		n += -1;
 	}
 	
	return 0;
}
