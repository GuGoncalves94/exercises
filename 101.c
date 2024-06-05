/* Alice gosta muito da letra A. Alice classifica como string harmônica todas as strings onde mais da metade dos caracteres são A. Por exemplo: "aaabb" e "abaa" são strings harmônicas; porém, "xaya" e "abbba" não são. Dada uma string qualquer (sem espaços), Alice quer apagar algumas de suas letras para torná-la harmônica. Alice pediu a sua ajuda para escrever um programa que informe qual o maior tamanho da string resultante após ela apagar algumas de suas letras, para torná-la harmônica. Considere que a entrada conterá somente letras minúsculas e haverá ao menos um caractere "a", de forma que sempre existe uma resposta. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int qtda = 0, qtdx, i;
	
	scanf("%s", a);
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == 'a')
		{
			qtda++;
		}	
	}
	
	qtdx = strlen(a) - qtda;
	
	while(qtdx >= qtda)
	{
		qtdx--;
	}
	
	printf("%d", qtdx + qtda);

	return 0;
}
