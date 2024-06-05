/* Usando apenas ponteiros, escreva um programa que leia uma frase de até 80 caracteres e a imprima em ordem reversa convertendo todos os caracteres minúsculos para maiúsculos. */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char v[80], *p;
	int i;
	
	scanf("%[^\n]", v);
	
	for(i = strlen(v) - 1; i >= 0; i--)
	{
		p = &v[i];
		if(isupper(*p))
		{
			printf("%c", *p);
		}
		else
		{
			printf("%c", toupper(*p));
		}
	}
	
	return 0;
}
