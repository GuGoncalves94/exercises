/* Faça um programa que leia uma frase F e dois inteiros I e J. A seguir, imprima os caracteres das posições que vão de I até J, inclusive. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i, j, k;
	
	fgets(a, 100, stdin);
	scanf("%d %d", &i, &j);
	
	for(k = 0; k < strlen(a); k++)
	{
		if(k >= i && k <= j)
		{
			printf("%c", a[k]);
		}
	}

	return 0;
}
