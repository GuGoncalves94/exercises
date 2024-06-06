/* Faça um programa que declare uma estrutura para o cadastro de N alunos, onde o usuário informa N. Armazene as seguintes informações sobre os alunos: matrícula, nome completo e data de nascimento.
Usando aritmética de ponteiros, leia as informações de N alunos e, a seguir, mostre o nome do aluno mais velho e do aluno mais novo. */

#include<stdio.h>
#include<string.h>

typedef struct cadastro {
	char mat[50];
	char nome[50];
	int nas;
} cadastro;

int main() {
	int N;
	printf("Amount of registers:\n");
	scanf("%d", &N);
	
	cadastro v[N];
	int i, *p, idx = 0, mn = 0;
	
	for(i = 0; i < N; i++) {
		scanf(" %s", &v[i].mat);
		scanf(" %[^\n]", &v[i].nome);
		scanf(" %d", &v[i].nas);
	}
	
	for(i = 0; i < N; i++) {
		p = &v[i].nas;
		if(*p < v[i + 1].nas) {
			idx++;
			mn = i;
		}
	}
	
	printf("Oldest: %s\n", v[mn].nome);
	printf("Newest: %s\n", v[idx].nome);

	return 0;
}
