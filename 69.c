/* Faça um programa que leia 8 inteiros representando o número de matrícula dos alunos e armazene em
um vetor. A seguir, leia 8 valores reais, representando as alturas desses alunos e armazene em um vetor.
Mostre o número de matrícula do aluno mais baixo, seguido de um espaço e de sua altura (2 casas decimais).
Na linha seguinte, faça o mesmo para o aluno mais alto. */

#include<stdio.h>
#define MAX 8
int main()
{
	int n[MAX], i, j, y, x;
	float r[MAX], maior, menor;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &n[i]);
	}
	
	for(j = 0; j < MAX; j++)
	{
		scanf("%f", &r[j]);
	}
	
	maior = r[0];
	
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			if(maior < r[i])
			{
				maior = r[i];
				y = n[i];
			}
			
		}
	}
	
	menor = r[0];
	
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			if(menor > r[i])
			{
				menor = r[i];
				x = n[i];
			}
		}
	
	}

	printf("%d %.2f\n", x, menor);
	printf("%d %.2f", y, maior);
	
	return 0;
}
