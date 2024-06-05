/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para essas variáveis. Associe as variáveis aos ponteiros. Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação. */

#include<stdio.h>
int main()
{
	int a = 2, *p;
	float b = 3.5, *i;
	char c = 'a', *j;
	
	p = &a;
	i = &b;
	j = &c;
	
	printf("%d\n%f\n%c\n\n", *p, *i, *j);
	
	*p = 9;
	*i = 5.8;
	*j = 'f';
	
	printf("%d\n%f\n%c\n", *p, *i, *j);
	
	return 0;
}
