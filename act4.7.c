/* Faça um programa que leia 10 notas (valores reais) e os armazene em um vetor. A seguir, imprima, com
duas casas decimais, a média das notas. */

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int i;
	float n[MAX], soma, med;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%f", &n[i]);
	}	
	
	soma = 0;
	
	for(i = 0; i < MAX; i++)
	{
		soma = soma + n[i];
	}
	
	med = soma / MAX;	
	printf("%.2f", med);
	
	return 0;
}
