/* Faça um programa que leia um inteiro positivo N e mostre quais são os seus divisores. Por exemplo, os
divisores de 30 são 1, 2, 3, 5, 6, 10, 15 e 30. Não deixe o usuário inserir um valor negativo. Imprima os
números em uma única linha, separados entre si por um único espaço. */

#include<stdio.h>
//start of the program
int main()
{
	int n, i, aux;
	
	do
	{
		scanf("%d", &n);
	}while(n < 0);
	
	for(i = 1; i <= n; i++)
	{
		aux = n % i;
		if(aux == 0)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}
