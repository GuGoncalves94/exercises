/* Faça um programa que leia uma matriz 4x5 de inteiros. Mostre como resposta o valor do maior elemento
presente na matriz, a linha e a coluna em que ele se encontra. Imprima os valores da resposta em uma única
linha, separados por um único espaço. */

#include<stdio.h>
#define LIN 4
#define COL 5
//start of the program
int main()
{
	int n[LIN][COL], m[0][0], i, j, maior, posx, posy;
	
	maior = m[0][0];
	posx = 0;
	posy = 0;
	
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			scanf("%d", &n[i][j]);
			if(maior < n[i][j])
			{
				maior = n[i][j];
				posx = i;
				posy = j;
			}
		}
	}
	
	printf("%d %d %d", maior, posx, posy);

	return 0;
}
