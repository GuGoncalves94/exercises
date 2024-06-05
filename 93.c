/* Faça um programa que leia 4 números inteiros no formato de string, compute a soma dos números lidos e mostre o resultado obtido. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[3], b[3], c[3], d[3];
	int soma, x, y, z, w;
	
	scanf("%s %s %s %s", a, b, c, d);	
	
	x = atoi(a);
	y = atoi(b);
	z = atoi(c);
	w = atoi(d);
	soma = x + y + z + w;
	
	printf("%d", soma);

	return 0;
}
