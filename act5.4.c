/* Faça um programa que leia uma matriz A de inteiros (3x3). A seguir, leia uma matriz B de inteiros (3x3).
Crie uma matriz C (3x3) composta pelos maiores valores de cada posição de A e B. Imprima C como
resposta. */

#include<stdio.h>
#define MAX 3
//start of the program
int main()
{
	int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], i, j, control;
	
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			scanf("%d", &a[i][j]);
		}
	} 

	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			scanf("%d", &b[i][j]);
		}
	} 

	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			if(a[i][j] > b[i][j])
			{
				c[i][j] = a[i][j];
			}
			else
			{
				c[i][j] = b[i][j];
			}
		}
	}

   	control = 0;
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{      
                	printf("%d ", c[i][j]);
                	control++;
		        if(control % 3 == 0)
		        {
		            printf("\n");
		        }
				
		}
	}

	return 0;
}
