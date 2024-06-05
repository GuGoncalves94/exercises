/* Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte
expressão: S = 1 – 2 + 3 – 4 + 5 – 6 + ... + N. */

#include<stdio.h>
//start of the program
int main()
{
	int n, i, x, soma;

	scanf("%d", &n);
	
	x = 1;
	
	for(i = 0; i <= n; i++)
	{
		x *= -1;
		soma = soma + (i * x);
	}

 	printf("%d", soma);
 	
	return 0;
}
