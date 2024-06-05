/* Crie uma estrutura representando os dados de um aluno: matrícula, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova. A seguir: a) entre com os dados de 5 alunos. b) encontre o aluno com maior nota na primeira prova, imprimindo seu nome completo e a nota, com 2 casas decimais. c) encontre o aluno com maior média geral, imprimindo seu nome completo, seguido da média, com 2 casas decimais. d) imprima uma listagem de matrícula e nome, dizendo também se cada aluno foi aprovado ou reprovado, considerando ao menos 60% de média para a aprovação */

#include<stdio.h>
#include<string.h>
#define N 5

typedef struct aluno
{
	char matr[50];
	char nome[50];
	float n1, n2, n3;
} aluno;

int main()
{
	aluno a[N];
	int i, idx = 0;
	float media = 0, nota = 0, maior;
	
	for(i = 0; i < N; i++)
	{
		scanf(" %s", a[i].matr);
		scanf(" %[^\n]", a[i].nome);
		scanf(" %f %f %f", &a[i].n1, &a[i].n2, &a[i].n3);
	}
	
	//biggest grade in the first test
	nota = a[0].n1; 
	for(i = 0; i < N; i++)
	{
		if(a[i].n1 > nota)
		{
			nota = a[i].n1;
			idx = i;
		}
	}
	
	printf("Maior nota na P1: %.2f\n%s\n\n", nota, a[idx].nome);
	
	//searching the student with the highest average
	maior = media;
	idx = 0;
	for(i = 0; i < N; i++)
	{
		media = (a[i].n1 + a[i].n2 + a[i].n3) / 3;
		if(maior < media)
		{
			maior = media;
			idx = i;
		}
		media = 0;
	}
	
	printf("Maior media: %s\nValor: %.2f\n\n", a[idx].nome, maior);
	
	//Checking if the student gets the minimum average
	for(i = 0; i < N; i++)
	{   
	    media = (a[i].n1 + a[i].n2 + a[i].n3) / 3;
		if(media < 6.0)
		{
			printf("%s %s Reprovado\n", a[i].matr, a[i].nome);
		}
		else
		{
			printf("%s %s Aprovado\n", a[i].matr, a[i].nome);
		}	
	}
	
	return 0;
}
