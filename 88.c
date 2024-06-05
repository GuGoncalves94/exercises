/* Faça um programa que leia uma frase e verifique se a frase é um palíndromo, ou seja, igual quando lida da esquerda para a direita e da direita para a esquerda. Desconsidere os espaços existentes na frase durante a verificação. Seu programa deve imprimir apenas "sim" ou "nao" como resposta. */
 // problema no espacamento final

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100], b[100], c[100];
	int i, j, k;
	
	scanf("%[^\n]", a);
	
	//removing the spaces and reading by back to front
	for(i = strlen(a) - 1, j = 0; i >= 0; i--)
	{	
		if(a[i] != ' ')
		{
			b[j] = tolower(a[i]);
			j++;
		}
	}
	
	b[j] = '\0';
	
	//removing the spaces 
	for(i = 0, k = 0; i <= strlen(a); i++)
	{
		if(a[i] != ' ')
		{
			c[k] = tolower(a[i]); 
			k++;
		}
	}

	//comparison
	if(strcmp(c, b) == 0)
	{
	    printf("sim");
	}
	else
	{
	    printf("nao");
	}
	
	return 0;
}
