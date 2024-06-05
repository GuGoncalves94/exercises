/* Faça um programa que leia uma frase e a imprima de trás para frente. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int i, j;
	
	scanf("%[^\n]", a);
	
	for(i = strlen(a) - 1, j = 0 ; i >= 0 ; i--, j++)
	{
		b[j] = a[i];
		printf("%c", b[j]);
	}

	return 0;
}
