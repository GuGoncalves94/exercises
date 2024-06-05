/* Faça um programa que leia 10 valores reais e os armazene em um vetor. A seguir, imprima em uma única
linha a quantidade de números negativos presentes no vetor, seguida da soma dos números positivos com 2
casas decimais, separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int i, neg;
	float n[MAX], soma;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%f",&n[i]);
	}
	
	soma = 0;
	
	for(i = 0; i < MAX; i++)
	{
		if(n[i] < 0)
		{
			neg++;
		}
		else if(n[i] > 0)
		{
			soma = soma + n[i];
		}
	}
	
	printf("%d ", neg);
	printf("%.2f", soma);

	return 0;
}
