/* Faça um programa que leia 10 inteiros e os armazene em um vetor A. A seguir, em um vetor B, armazene
o quadrado de cada elemento presente em A. Imprima os números de B em uma única linha, separados entre
si por um único espaço. */

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int n[MAX], i, mult;
	
	printf("Enter %d entire numbers:\n", MAX);
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &n[i]);
	}
	
	for(i = 0; i < MAX; i++)
	{
		mult = n[i] * n[i];
		printf("%d ", mult);
	}

	return 0;
}
