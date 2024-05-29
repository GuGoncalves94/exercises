/* Faça um programa que receba uma frase e converta a primeira letra de cada palavra para maiúscula. */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
	int i;
	
	fgets(a, 100, stdin);
	
	a[0] = toupper(a[0]);
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	}
	
	printf("%s", a);
	
	return 0;
}
