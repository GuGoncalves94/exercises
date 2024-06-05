/* Faça um programa que leia uma matriz 4x4 de inteiros. A seguir, mostre como resposta quantos valores
maiores que 10 estão presentes na matriz. */

#include<stdio.h>
#define MAX 4
//start of the program
int main()
{
	int n[MAX][MAX], i, j, control;
	
	control = 0;
	
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			scanf("%d", &n[i][j]);
			if(n[i][j] >= 10)
			{
				control++;
			}
		}
	}
	
	printf("%d", control);
	
	return 0;
}
