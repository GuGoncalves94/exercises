/* Faça um programa que leia 6 inteiros e os armazene em um vetor. A seguir, imprima em uma única linha
quais são o maior e o segundo maior elementos presentes no vetor, separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 6
//start of the program
int main()
{
	int n[MAX], i, maior, smaior;
	
	for(i = 0 ; i < MAX; i++)
	{
		scanf("%d", &n[i]);
	}
	
	maior = n[0];
	smaior = 0;
	
	for(i = 0; i < MAX; i++)
	{
		if(maior < n[i])
		{
			smaior = maior;
			maior = n[i];
		}	
	}
	
	printf("%d ", maior);
	printf("%d", smaior);

	return 0;
}
