/* Faça um programa que leia uma frase e a copie para outro vetor, removendo os espaços em branco. Imprima o segundo vetor. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int i, j;

	scanf("%[^\n]", a);
	
	for(i = 0, j = 0; i < strlen(a); i++, j++)
	{
		if(a[i] != ' ')
		{
			b[j] = a[i];
			printf("%c", b[j]);
		}
	}
	
	return 0;
}
