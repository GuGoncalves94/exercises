/* Faça um programa que leia um inteiro N e mostre quais são os N primeiros números ímpares. Imprima os
números em uma única linha, separados entre si por um único espaço. Atenção: se o usuário digita N = 4, a
resposta é: 1 3 5 7 (que são os 4 primeiros números ímpares!). */

#include<stdio.h>
//start of the program
int main()
{
	int n, i;
	
	printf("Enter an entire number:\n");
	scanf("%d", &n);
	
	i = 1;
	
	while(n >= 1)
	{	
		printf("%d ", i);
		n--;
		i += 2;
	}

	return 0;
}
