/* Faça um programa que receba duas palavras e as concatene em uma única frase, onde as duas palavras são separadas por espaço. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int i;
	
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == '\n')
		{
			a[i] = ' ';
		}
	}
	strcat(a, b);
	
	printf("%s", a);

	return 0;
}
