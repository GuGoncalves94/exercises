/* Faça um programa que leia dois valores e os armazene em duas variáveis: v1 e v2. A seguir, troque os
valores dessas variáveis: o conteúdo de v1 vai para v2 e vice-versa. Mostre os valores de v1 e v2, nesta
ordem, em uma única linha, separados por um único espaço. */

#include<stdio.h>
//start of the program
int main()
{
	float a, b, v1, v2;
	//first print on the screen
	printf("Enter two values:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	v1 = a;
	v2 = b;
	//swape the values
	v2 = v1;
	v1 = b;
	//second print on the screen
	printf("%.1f %.1f\n", v1, v2);

	return 0;
}
