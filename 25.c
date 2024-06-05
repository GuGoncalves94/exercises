/* Faça um programa que leia duas notas de um aluno e verifique se estas notas são válidas. Uma nota é
válida se ela está no intervalo de 0 a 10. Caso as notas sejam válidas, mostre a média entre elas. Caso não
sejam válidas, mostre a mensagem “notas incorretas”. */

#include<stdio.h>
//start of the program
int main()
{
	float a, b;
	printf("Enter your grades:\n");
	scanf("%f %f", &a, &b);
	if(a <= 10 && a >= 0 && b <= 10 && b >= 0)
	{
		a = (a + b) / 2;
		printf("%.2f\n", a);
	}
	else 
	{
		printf("Notas incorretas\n");
	}

	return 0;
}
