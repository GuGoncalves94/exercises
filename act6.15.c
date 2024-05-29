/* Faça um programa que receba uma frase e mostre a quantidade de palavras digitadas na frase. */ 

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i, qtd = 0;
	
	fgets(a, 100, stdin);
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			qtd++;
		}
	}

	printf("%d", qtd + 1);

	return 0;
}
