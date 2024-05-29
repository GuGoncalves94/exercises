/* Faça um programa que leia 6 inteiros e os armazene em um vetor. A seguir, imprima o vetor em ordem
inversa, em uma única linha, com os elementos separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 6
//start of the program
int main()
{
	int n[MAX], i;

	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &n[i]);
	}
	
	for(i = 5; i >= 0; i--)
	{
		printf("%d ", n[i]);
	}
	
	return 0;
}	
