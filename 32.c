/* Faça um programa que leia as medidas dos 3 lados de um triângulo e mostre o tipo de triângulo:
equilátero, isósceles ou escaleno. Imprima apenas o nome do triângulo, em letras minúsculas e sem acentos. */

#include<stdio.h>
//start of the program
int main()
{
	float a, b, c;
	printf("Enter the measurement of the three sides:\n");
	scanf("%f %f %f", &a, &b, &c);
	if(a == b && b == c)
	{
		printf("equilatero\n");
	}
	else if(a != b && b == c)
	{
		printf("isoceles\n");
	}
	else if(a != b && b != c)
	{
		printf("escaleno\n");
	}
	
	return 0;
}
