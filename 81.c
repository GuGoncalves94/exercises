/* Faça um programa que leia uma matriz 3x3. Essa matriz será preenchida apenas com elementos 0 e 1 (não
é necessário verificar; os casos de testes não irão “trapacear” a entrada), representando um “jogo da velha”.
Imprima como resposta apenas um “sim” ou “nao” (sem acentos), informando se as marcações de “1”
venceram a partida. */

#include<stdio.h>
#define MAX 3
//start of the program
int main()
{
	int a[MAX][MAX], i, j, control;
	
	//for to read the matrix
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	//search if the 1 wins 
	control = 0;
	//first line
	if(a[0][0] == 1 && a[0][1] == 1  && a[0][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//second line
	if(a[1][0] == 1 && a[1][1] == 1 && a[1][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//third line		
	if(a[2][0] == 1 && a[2][1] == 1 && a[2][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//first column
	if(a[0][0] == 1 && a[1][0] == 1 && a[2][0] == 1)
	{
		printf("sim");
		control = 1;
	}
	//second column
	if(a[0][1] == 1 && a[1][1] == 1 && a[2][1] == 1)
	{
		printf("sim");
		control = 1;
	}
	//third column
	if(a[0][2] == 1 && a[1][2] == 1 && a[2][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//main diagonal
	if(a[0][0] == 1 && a[1][1] == 1 && a[2][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//secondary diagonal
	if(a[0][2] == 1 && a[1][1] == 1 && a[2][0] == 1)
	{
		printf("sim");
		control = 1;
	}
	if(control == 0)
	{
		printf("nao");
	}
	return 0;
}
