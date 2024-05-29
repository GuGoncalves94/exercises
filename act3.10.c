/* Faça um programa que leia um inteiro positivo N e mostre a soma de seus divisores. Por exemplo, a
soma dos divisores de 30 é 1 + 2 + 3 + 5 + 6 + 10 + 15 + 30 = 72. Não deixe o usuário inserir um valor
negativo. */

#include<stdio.h>
//start of the program
int main()
{
	int n, i, aux, soma;
	
	do
	{
		scanf("%d", &n);
	}while(n < 0);
	
	for(i = 1; i <= n; i++)
	{
		aux = n % i;
		if(aux == 0)
		{
			soma = soma + i;
		}
	}
	
	printf("%d ", soma);
	
	return 0;
}
