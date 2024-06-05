/* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis, compare seus endereços e exiba o conteúdo do maior endereço */

#include<stdio.h>
int main()
{
	int a, b;
	int *p = NULL, *i = NULL;
	
	scanf("%d %d", &a, &b);
	
	p = &a;
	i = &b;
	
	if(p > i)
	{
		printf("%p", p);
	}
	else
	{
		printf("%p", i);
	}

	return 0;
}
