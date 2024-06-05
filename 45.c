/* Faça um programa que leia dois inteiros N e X e mostre a soma dos múltiplos de X menores que N. Não
deixe o usuário inserir valores negativos. */

#include<stdio.h>
//start of the program
int main()
{
	int n, x, i, y, soma;
	
	do
	{
		scanf("%d %d", &n, &x);
	}while(n < 0);
	
	soma = 0;
	
	for(i = 1; i < n; i++)
	{
		y = i * x;
		if(y < n)
		{
		soma = soma + y;
		}
	}
	
	printf("%d", soma);
	
	return 0;
}
