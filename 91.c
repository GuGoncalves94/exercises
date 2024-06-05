/* Faça um programa que leia uma frase F, um caractere C e um inteiro I. Seu programa deve devolver o índice da primeira posição da string onde foi encontrado o caractere C, sendo que a procura começa a partir da posição I. Caso o caractere buscado não exista, imprima -1. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], c;
	int i, k, control = 0;
	
	fgets(a, 100, stdin);
	scanf(" %c %d", &c, &i);
	
	for(k = 0; k < strlen(a); k++)
	{
		if(k >= i && a[k] == c)
		{
			printf("%d", k);
			return 0;
		}
	}
	
	if(control == 0)
	{
		printf("-1");
	}
	
	return 0;
}
