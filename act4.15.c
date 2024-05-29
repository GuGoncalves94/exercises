/* Faça um programa que leia, indefinidamente, valores inteiros. Sempre que o usuário digitar um número
ímpar, armazene-o em um vetor de 10 posições. Assim que o décimo número ímpar for armazenado, encerre
a leitura e imprima, em uma única linha, os elementos do vetor separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 1000
#define MIN 10
//start of the program
int main()
{
	int a[MAX], b[MIN], i, j;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &a[MAX]);
		if(a[i] < 0)
		{
			for(j = 0; j < MIN; j++)
			{
				b[j] = a[i];
		 	}
		 	if(b[j] = MIN)
			{
				break;
			}
		}
		
		
	}
	
	for(j = 0; j < MIN; j++)
	{
		printf("%d ", b[j]);
	}

	
	
	return 0;
}
