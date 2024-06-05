/* Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir,
utilizando um ponteiro de int, mostre o endereço e o conteúdo de cada posição do vetor. */

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
	
	for(i = 0; i < 10; i++)
	{
		p = &v[i];
		printf("%p %d\n", p, *p);
	}
	
	return 0;
}
