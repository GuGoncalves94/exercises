/* Faça um programa que leia uma matriz 3x5 de inteiros. A seguir, mostre como resposta quantos valores
pares e quantos valores ímpares estão presentes na matriz. Imprima os valores da resposta em uma única
linha, separados por um único espaço. */

#include<stdio.h>
#define LIN 3 // Lines 
#define COL 5 // Columns
//start of the program
int main()
{
	int n[LIN][COL], i, j, par, impar;
	
	par = 0;
	impar = 0;
	
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			scanf("%d", &n[LIN][COL]);
			if(n[LIN][COL] % 2 == 0)
			{
				par++;
			}
			else
			{
				impar++;
			}
		}
	}

	printf("%d %d", par, impar);

	return 0;
}
