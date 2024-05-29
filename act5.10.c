/* Faça um programa que leia uma matriz NxN, onde o usuário informa o valor de N. A seguir, verifique se
ela forma um quadrado mágico. Um quadrado mágico é aquele em que a soma de todas as linhas, todas as
colunas e todas as diagonais é a mesma. Imprima como resposta apenas um “sim” ou “nao” (sem acentos). */

#include<stdio.h>
//start of the program
int main()
{
	int a[n][n], i, j, s1, s2, srow, scol, check;
	
	//ask the value of n
	scanf("%d", &n)
	
	//read the values
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	check = 0;
	//checking if the matrix is an magic square 
	//Main diagonal
	for(i = 0; i < n; i++) 
	{ 
		s1 += a[i][i];
	}
	//Secondary diagonal
	for(i = 0, j = n - 1; i < n ; i++, j--)
	{
		s2 += a[i][j]; 	
	}	
	
	if(s1 != s2)
	{
		printf("nao");
		return 0;
	}
	//rows and cols
	for(i = 0; i < n; i++)
	{
		srow = 0;
		scol = 0;
		for(j = 0; j < n; j++)
		{
		 	srow += a[i][j];
		 	scol += a[j][i];
		}
		if(s1 != srow)
		{
			printf("nao");
			check++;
			break;
		}
		if(s1 != scol)
		{
			printf("nao");
			check++;
			break;
		}
	}
	
	if(check == 0)
	{
		printf("sim");
	}
	
	return 0;
}
