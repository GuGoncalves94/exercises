/* Faça um programa que leia 10 inteiros e os armazene em um vetor. A seguir, imprima em uma única
linha os elementos do vetor, separados entre si por um único espaço, porém, eliminando repetições de
elementos. */

#include<stdio.h> 
#define MAX 10
//start of the program
int main()
{
	int n[MAX], i, j, k, tam;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &n[i]);
	}
	
	tam = MAX; 
	
	for(i = 0; i < tam; i++)
	{
		for(j = i + 1 ; j < tam;)
		{
			if(n[i] == n[j])
			{
				for(k = j; k < tam; k++)
				{
					n[k] = n[k + 1];
				}
				tam--;
			}
			else
			{
				j++;
			}
		}       
	}
	
	for(i = 0; i < tam; i++)
	{
		printf("%d ", n[i]);
	}
	
	return 0;
}
