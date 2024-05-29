/* O preço de um carro novo é dado pela soma do custo de fábrica com a porcentagem do distribuidor e dos
impostos (aplicados ao custo de fábrica). Supondo que a porcentagem do distribuidor seja 28% e os
impostos sejam 45%, faça um programa que leia o custo de fábrica e mostre o custo final do carro. */

#include<stdio.h>
//start of the program 
int main()
{
	float a, answer;
	//first print on the screen
	printf("Enter the factory price of the car:\n");
	scanf("%f", &a);
	answer = a * 173/100;
	//second print on the screen
	printf("Final price including all taxes is: %.2f\n", answer);

	return 0;
}
