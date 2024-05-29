/* Faça um programa que leia uma frase e conte quantas vogais a frase possui no total. */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
	int qtd, i; 
	
	scanf("%[^\n]", a);
	
	qtd = 0;
	
	for(i = 0; i < strlen(a); i++)
	{
		if(islower(a[i]))
		{
			if(a[i] == 'a' || a[i] == 'o' || a[i] == 'e' || a[i] == 'i' || a[i] == 'u')
			{
				qtd++;
			}
		}
		else
		{
			if(a[i] == 'A' || a[i] == 'O' || a[i] == 'E' || a[i] == 'I' || a[i] == 'U')
			{
				qtd++;
			}
		}
		
	} 
	
	printf("%d", qtd);

	return 0;
}
