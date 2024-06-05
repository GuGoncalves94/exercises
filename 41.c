/* Faça um programa que leia um inteiro positivo N, calcule e mostre a soma dos N primeiros números
ímpares. Não deixe o usuário inserir um valor negativo. Se um valor negativo for inserido, continue lendo N. */

#include<stdio.h>
//start of the program
int main()
{
	int n, i, soma;
	
	i = -1;
	soma = 0;
	
	do 
	{	
		printf("Enter an entire number:\n");
		scanf("%d", &n);
			
	}while(n < 0);

	while(n >= 1)
	{
		n--;				
		i += 2;	
		soma = soma + i;
	}
	
	printf("%d\n", soma);
	
	return 0;
}
