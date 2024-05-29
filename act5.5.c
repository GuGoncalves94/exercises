/* Faça um programa que leia uma matriz A de inteiros (2x4). A seguir, leia uma matriz B de inteiros (4x3).
Imprima, em uma linha, separados por um único espaço, os elementos comuns a A e B. */

#include<stdio.h>
//start of the program
int main()
{
	int a[2][4], b[4][3], i, j, k, l;
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("-------");

	for(k = 0; k < 4; k++)
	{
		for(l = 0; l < 3; l++)
		{
			scanf("%d", &b[k][l]);
		}
	}

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 4; j++)
		{
			for(k = 0; k < 4; k++)
			{
				for(l = 0; l < 3; l++)
				{
					if(a[i][j] == b[k][l])
					{
						printf("%d ", a[i][j]);
					}
				}
			}
			
		}
	}

	return 0;
}
