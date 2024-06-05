/* Faça um programa que leia 5 inteiros e os armazene em um vetor A. Leia outros 5 inteiros e os armazene
em um vetor B. Crie um vetor C = A – B (a subtração das respectivas posições). Imprima, em uma única
linha, os elementos do vetor C separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 5
//start of the program
int main()
{
	int a[MAX], b[MAX], c[MAX], i, j;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &a[i]);
	}

	for(j = 0; j < MAX; j++)
	{
		scanf("%d", &b[j]);
	}

	//intersection
	
	for(i = 0; i < MAX; i++)
	{ 
	    c[i] = a[i] - b[i];
	}

	for(i = 0; i < MAX; i++)
	{
	    printf("%d ", c[i]);
	}

	return 0;
}































