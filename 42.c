/* Faça um programa que leia dois inteiros N e X. A seguir, mostre quais são os N primeiros números
naturais que são múltiplos de X. Imprima os números em uma única linha, separados entre si por um único
espaço. */

#include<stdio.h>
//start of the program
int main()
{
	int n, x, i, aux;
	
	printf("Enter two entire numbers:\n");
	scanf("%d %d", &n, &x);
	
	i = 1;
	aux = x % i;
		
	while( n >= 1 )
	{
		if(aux == 0)
		{	n--;
			i++;
			printf("%d ", i);
		}	
	}	
		
	return 0;
}
