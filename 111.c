/* Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior
deles. */

#include<stdio.h>

int main()
{
	int a = 2, b = 3;
	int *p = NULL, *i = NULL;
	
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
