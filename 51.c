/* Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte
expressão, com precisão de duas casas decimais: S = 0/1 + 2/2 + 4/4 + 6/8 + 8/16 + 10/32 + 12/64 + 14/128
+ ... */

#include<stdio.h>
//start of the program
int main()
{
	int n, i, x;
	float soma, y;
	
	scanf("%d", &n);
	
	x = 1;
	y = 1;
	
	for (i = 0; x <= n; i += 2)
	{
		x++;
		soma = soma + ( i / y );
		y *= 2;
		
	}
 	
 	printf("%.2f\n", soma);

	return 0;
}
