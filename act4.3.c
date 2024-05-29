/* Faça um programa que leia 8 inteiros e os armazene em um vetor. A seguir, leia dois inteiros X e Y. Ao
final, mostre a soma dos elementos do vetor que estão nas posições X e Y. */

#include<stdio.h>
#define MAX 8
//start of the program
int main()
{
	int a[MAX], x, y, i, s, s1, soma;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("-------\n");
	
	scanf("%d %d", &x, &y);
	
	for(i = 0; i < MAX; i++)
	{
		if(x == i)
		{
			s = a[i];
		}
		if(y == i)
		{
			s1 = a[i];
		}
	}
	
	soma = s + s1;
	printf("%d", soma);
	
	return 0;
}
