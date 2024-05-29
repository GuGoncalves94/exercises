/* Faça um programa que leia 6 inteiros e os armazene em um vetor A. Leia outros 6 inteiros e os armazene
em um vetor B. A seguir, imprima em uma única linha, os elementos do vetor A que não estão presentes no
vetor B, separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 6
//start of the program
int main()
{
	int a[MAX], b[MAX], i, j, repete;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("--------\n");

	for(j = 0; j < MAX; j++)
	{
		scanf("%d", &b[j]);
	}

	//interseccao
	
	for(i = 0; i < MAX; i++)
	{
		repete = 0;
		for(j = 0; j < MAX; j++)
		{
			if(a[i] == b[j])
			{
				repete = 1;
			}
			
		}
		if(repete == 0)
		{
			printf("%d ", a[i]);
		}
	}

	return 0;
}
