/* Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte
expressão, com precisão de duas casas decimais: S = + 1/1 + 3/2 – 5/3 – 7/4 + 9/5 + 11/6 – 13/7 – 15/8 + ... */

#include<stdio.h>
//start of the program
int main()
{
	int n, i, x, sinal;
	float soma, den;

	scanf("%d", &n);
	
	x = 1;
	sinal = 1;
	den = 1;
	soma = 0;
	
	for (i = 1; x <= n; i += 2)
	{
        soma = soma +  (sinal * (i / den) );
        den++;
        if(x % 2 == 0)
		{
        	sinal = -sinal;
		}
		x++;
	}
	
 	printf("%.2f\n", soma);

	return 0;
}
