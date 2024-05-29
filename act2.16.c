/* Uma empresa aérea quer contratar novos comissários de vôo. Se a pessoa for homem, a altura mínima
exigida é de 1,75m. No caso das mulheres, é necessário ter ao menos 1,80m de altura. Faça um programa
que leia a altura (valor real) e o sexo (m ou f) de uma pessoa e informe se ela pode ou não ser contratada.
Seu programa deve imprimir apenas as respostas “sim” ou “nao”. */

#include<stdio.h>
//start of the program
int main()
{
	float a;
	char gen;
	printf("Enter your height:\n");
	scanf("%f", &a);
	printf("Enter your gender (M/F):\n");
	scanf(" %c", &gen);
	if(gen == 'M' && a >= 1.75)
	{
		printf("sim\n");
	}
	else if(gen == 'M' && a < 1.75)
	{
		printf("nao\n");
	}
	else if(gen == 'F' && a >= 1.80)
	{
		printf("sim\n");
	}
	else if(gen == 'F' && a < 1.80)
	{
		printf("nao\n");
	}
	
	
	return 0;
}
