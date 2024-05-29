/* Faça um programa que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não
se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
Seu programa deve imprimir apenas as respostas “sim” ou “nao”. */

#include<stdio.h>
//start of the program
int main()
{
	int a, b;
	printf("Enter your age:\n");
	scanf("%d", &a);
	printf("Enter the amount of service year:\n");
	scanf("%d", &b);
	if (a >= 65 || b >= 30)
	{
		printf("sim\n");
	} 
	else if(a >= 60 && b >= 30)
	{
		printf("sim\n");
	}
	else 
	{
		printf("nao\n");
	}
	
	return 0;
}
