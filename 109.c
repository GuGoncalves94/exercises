/* Em um vetor de estrutura, armazene as seguintes informações sobre 8 livros: título, autor e ano. A seguir, leia o nome de um autor e mostre os títulos e anos dos livros escritos por ele. Repita o processo até que o usuário digite “sair”. */

#include<stdio.h>
#include<string.h>
#define N 8

typedef struct livros
{
	char titulo[100];
	char autor[50];
	int ano;

} livros;

int main()
{
	livros v[N];
	int i;
	char a[50], b[5] = "sair";
	
	for(i = 0; i < N; i++)
	{
		scanf(" %[^\n]", v[i].titulo);
		scanf(" %[^\n]", v[i].autor);
		scanf(" %d", &v[i].ano);
	}
	
	scanf(" %[^\n]", a);
	while(strcmp(a, b) != 0)
	{
		printf("Livros de %s:\n", a);
		for(i = 0; i < N; i++)
		{	
			if(strcmp(v[i].autor, a) == 0)
			{
				printf("%s (%d)\n\n", v[i].titulo, v[i].ano);
			}	
		}
		printf("\n");
		scanf(" %[^\n]", a);
	}
	
	return 0;
}
