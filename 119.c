/* Faça um programa usando ponteiros para ordenar 5 números armazenados em um vetor e mostrá-los ordenados na tela. */

#include<stdio.h>
int main()
{
	int v[5];
	int i, j, *p, *k, aux;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		p = &v[i];
		for(j = i + 1; j < 5; j++)
		{
			k = &v[j];
			if(*p > *k)
			{
				aux = *k;
				*k = *p;
				*p = aux;
				
			}
		}
	}
	
	
	for(i = 0; i < 5; i++){
		printf("%d ", v[i]);
	}



	return 0;
}
