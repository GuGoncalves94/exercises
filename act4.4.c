/* Faça um programa que leia 10 inteiros e os armazene em um vetor. Mostre, como resposta, quantos
elementos pares o vetor possui. */

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int n[MAX], i, x;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &n[i]);
	}

	x = 0;
	
	for(i = 0; i < MAX; i++)
	{
		if(n[i] % 2 == 0)
		{
			x++;
		}
	}

	printf("%d", x);
	
	return 0;
} 
