/* Faça um programa que leia um inteiro positivo N e imprima todos os números naturais de 0 até N, em
ordem crescente. Imprima os números em uma única linha, separados entre si por um único espaço. Não
deixe o usuário inserir um valor negativo. Se um valor negativo for inserido, continue lendo N. */

#include<stdio.h>
//start of the program
int main()
{
	int n, i;
	
	do
	{
		printf("Enter an entire number:\n");
		scanf("%d", &n);
	}while( n <= 0 );
	
	i = 0; 
	
	while(i <= n)
 	{
 		printf("%d ", i);
 		i += 1;
 	}
	return 0;
}
