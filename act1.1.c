/*Faça um programa que leia um valor dado em reais (R$) e a cotação do dólar (US$). A seguir, mostre o
valor em reais convertido para dólar.*/

#include<stdio.h> 
//start of the program
int main() 
{
	float a,b; 
	float answer;
	//first print on the screen
	printf("Enter the value in reais:");
	scanf("%f", &a);
	//second print on the screen
	printf("Enter the dolar exchange rate:");
	scanf("%f", &b);
	answer = a/b;
	//third print on the screen
	printf("The amount in dolars is: %.2f\n", answer);

	return 0;
}
