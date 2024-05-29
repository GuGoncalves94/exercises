/* Faça um programa que leia 10 inteiros e os armazene em um vetor. A seguir, imprima qual é o maior e
qual é o menor elemento presente no vetor, separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int n[MAX], i, maior, menor;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &n[i]);
	}
	
	maior = n[0];
	menor = n[0];
	
	
	for(i = 0; i < MAX; i++)
	{
		if(maior < n[i])
		{
			maior = n[i];
		}
		if(menor > n[i])
		{
			menor = n[i];
		}
	}
	
	printf("%d ", maior);
	printf("%d", menor);
	
	return 0;	
}
