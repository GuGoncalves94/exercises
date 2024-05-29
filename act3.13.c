/* Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte
expressão, com precisão de duas casas decimais: S = – 1 + 1/2 – 1/3 + 1/4 – 1/5 + ... + 1/N. */

#include<stdio.h>
//start of the program
int main()
{
	int n, i, x;
	float soma;

	scanf("%d", &n);
	
	soma = 0;
	x = 1;
	
	for(i = 1; i <= n; i++)
	{
		x *= -1;
		soma = soma + (1.0 / i) * x;
	}

 	printf("%.2f", soma);
 	
	return 0;
}
