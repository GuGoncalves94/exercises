/* Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% de seu salário, mostre a mensagem: “emprestimo nao concedido”. Caso
contrário, mostre a mensagem: “emprestimo concedido”.
 */

#include<stdio.h>
//start of the program
int main()
{
	float a, b, c;
	printf("Enter your salary:\n");
	scanf("%f", &a);
	printf("Enter the amount of installment:\n");
	scanf("%f", &b);
	c = a * 20/100.0;
	if (b > c)
	{
		printf("emprestimo nao concedido\n");
	}
	else
	{
		printf("emprestimo concedido\n");
	}
	
	return 0;
}
