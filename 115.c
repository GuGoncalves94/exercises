/* Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir, utilizando um ponteiro de int, some uma unidade a cada posição do vetor. Imprima o vetor antes e após a modificação. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int v[10], i;
	int *p;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &v[i]);
	
	}
	
	printf("-----\n");
	
	//array before add 1 to each position
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", v[i]);
	}
	
	printf("-----\n");
	
	//adding 1 to each position
	for(i = 0; i < 10; i++)
	{	
		p = &v[i];
		printf("%d\n", *p + 1);
	}
	
	return 0;
}
