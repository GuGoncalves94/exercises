/* Faça um programa que leia 4 números inteiros no formato de string, compute a soma dos números lidos, converta o resultado para outra string e mostre a string que contém o resultado. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[5], b[5], c[5], d[5], as[5]; 
	int x, y, z, w, soma;
	
	fgets(a, 5, stdin);
	fgets(b, 5, stdin);
	fgets(c, 5, stdin);
	fgets(d, 5, stdin);
	
	sscanf(a, "%d", &x);
	sscanf(b, "%d", &y);
	sscanf(c, "%d", &z);
	sscanf(d, "%d", &w);
	
	soma = x + y + z + w;
	
	sprintf(as, "%d", soma);
	
	printf("%s", as);
	
	return 0;
}	
