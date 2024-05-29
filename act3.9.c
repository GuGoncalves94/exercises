/* Faça um programa que leia uma quantidade desconhecida de valores inteiros e mostre a sua média, com 1
casa decimal. O programa deve parar de ler quando um valor negativo for inserido. */

#include<stdio.h>
//start of the program
int main()
{
	int a, i;
	float answer, soma;
	
	soma = 0;
	i = 0;
	
	do 
	{	
		scanf("%d", &a); 
		if(a > 0)
		{
		    soma = soma + a;
	    	i++;
		}
	}while(a > 0);
	
	answer = soma / (int) i;
	printf("%.1f\n", answer);

	return 0;
}
