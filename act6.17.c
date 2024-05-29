/* Faça um programa que receba uma frase e mostre a quantidade de letras minúsculas e de letras maiúsculas digitadas. Imprima os dois valores em uma linha, separados por um único espaço. */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
	int i, QTD, qtd;
	
	fgets(a, 100, stdin);
	
	QTD = qtd = 0;
	
	for(i = 0; i < strlen(a); i++)
	{
		if(isupper(a[i]) && a[i] != ' ')
		{
			QTD++;
		}
		else if(islower(a[i]) && a[i] != ' ')
		{
			qtd++;
		}
		
	}
	
	printf("%d %d", qtd, QTD);

	return 0;
}
