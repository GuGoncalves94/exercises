/* Faça um programa que leia 6 valores inteiros e os armazene em um vetor. Em seguida, mostre na tela
todos os elementos do vetor, em uma única linha, separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 6
//start of the program
int main()
{
	int n[MAX], i;
	
	printf("Enter %d values:\n", MAX);
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &n[i]);
	}
	
	printf("The numbers are:\n");
	
	for(i = 0; i < MAX; i++)
	{
		printf("%d ", n[i]);
	}
	
	return 0;
}
