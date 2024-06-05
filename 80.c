/* Faça um programa que leia uma matriz 4x4 de inteiros. Mostre como resposta o valor do segundo maior
elemento presente na matriz, a linha e a coluna em que ele se encontra. Imprima os valores da resposta em
uma única linha, separados por um único espaço. */

#include<stdio.h>
#define MAX 4
//start of the program
int main()
{
	int a[MAX][MAX], i, j, k,  maior, smaior, lin, col;
	
	for(i = 0 ; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	maior = a[0][0];
	
	for(i = 0 ; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			if(maior < a[i][j])
			{
				smaior = maior;
				lin = i;
				col = j - 1;
				maior = a[i][j];
			}
			else if(smaior < a[i][j])
			{
				smaior = a[i][j];
				lin = i;
				col = j;
			}
		}
	}	
	
	printf("%d %d %d", smaior, lin, col);

	return 0;
}
