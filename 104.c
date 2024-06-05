/* Crie uma estrutura para armazenar os dados de um aluno: nome, número de matrícula e curso. Leia as informações de 5 alunos e armazene em um vetor dessa estrutura. A seguir, imprima os dados de todos os alunos na tela. Siga o formato de saída mostrado no Moodle. */

#include<stdio.h>
#define N 5

typedef struct aluno
{
	char nome[100];
	char numm[100];
	char curso[100];
} aluno;

int main()
{
	aluno a[N];
	int i;
	
	for(i = 0; i < N; i++)
	{
		scanf(" %[^\n]", a[i].nome);
		scanf(" %s", a[i].numm);
		scanf(" %[^\n]", a[i].curso);
	}
	
	for(i = 0; i < N; i++)
	{
		printf("Aluno %d:\nNome: %s\nMatricula: %s\nCurso: %s\n\n", i + 1, a[i].nome, a[i].numm, a[i].curso);
	}

	return 0;
}
