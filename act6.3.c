/* Faça um programa que leia uma frase e conte quantos espaços existem na frase. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i, qtd;
	
	scanf("%[^\n]", a);
	
	qtd = 0;
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			qtd++;
		}
	}

	printf("%d", qtd);
	
	return 0;
}
