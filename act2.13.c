/* Faça um programa que leia a idade de um nadador e mostre em qual categoria ele é classificado, de
acordo com a tabela a seguir.
| Idade Categoria |
|4 a 5 anos | Fraldinha |
|6 a 12 anos | Infantil |
|13 a 18 anos | Juvenil |
|Mais de 18 anos | Adulto | */

#include<stdio.h>
//start of the program
int main()
{
	int a;
	printf("Enter your age:\n");
	scanf("%d", &a);
	if(a >= 4 && a <=5)
	{
		printf("Fraldinha\n");
	}
	else if(a >=6 && a <= 12)
	{
		printf("Infantil\n");
	}
	else if(a >= 13 && a <= 18)
	{
		printf("Juvenil\n");
	}
	else if(a > 18)
	{
		printf("Adulto\n");
	}

	return 0;
}
