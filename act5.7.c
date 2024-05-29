/* Faça um programa que leia uma matriz 3x5 de inteiros. A seguir, mostre como resposta os números
primos presentes na matriz. Imprima os valores da resposta em uma única linha, separados por um único
espaço. */

#include<stdio.h>
//start of the program
int main()
{
	int a[3][5], i, j, k, l, prime;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("-------\n");

	//search the prime numbers
	
	for(i = 0; i < 3; i++)
	{	
		prime = 0;
		l = 0;
		for(j = 0; j < 5; j++)
		{
			prime = a[i][j];
			for(k = 2; k < prime; k++) //will check if the number is a prime number
			{
				if(prime % k == 0)
				{
					l = 1;
					break;
				}
			}
			if(l == 0  && prime != 1)
			{
				printf("%d ", prime);
			}
		}	
	}

	return 0;
}
