/* Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir, utilizando apenas ponteiros de int, some uma unidade ao conteúdo de cada posição do vetor se o conteúdo for par; multiplique por 2 se for ímpar. */

#include<stdio.h>
int main()
{
	int v[10], *p, i;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		p = &v[i];
		if(*p % 2 == 0)
		{
			*p = *p + 1;
			printf("%d\n", *p);
		}
		else
		{
			*p = *p * 2;
			printf("%d \n", *p);
		}
	}
	
	return 0;
}
