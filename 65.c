/* Faça um programa que leia 10 inteiros e os armazene em um vetor. A seguir, leia um valor X e imprima
quais são os elementos múltiplos de X que estão presentes no vetor. */

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

	printf("enter an entire number: ");
	scanf("%d", &x);
	
	for(i = 0; i < MAX; i++)
	{
		if(n[i] % x  == 0)
		{
			printf("%d ", n[i]);
		}
	}

	return 0;
}
