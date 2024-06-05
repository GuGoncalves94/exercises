/* Faça um programa que leia um valor inteiro e, caso este valor seja positivo, calcule e mostre a sua raiz
quadrada. Caso ele seja negativo, calcule e mostre o seu quadrado. */

#include<stdio.h>
#include<math.h>
//start of the program
int main()
{
	int a;
	float b;
	printf("Enter an entire number:");
	scanf("%d", &a);
	if (a > 0)
	{
		b = sqrt(a);
		printf("%.3f\n", b);
	}
	else if (a < 0)
	{
		a = pow(a,2);
		printf("%d\n", a);
	}


	return 0;
}
