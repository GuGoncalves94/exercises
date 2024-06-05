/* Cada estado da região sudeste possui uma taxa de imposto distinta sobre o valor dos produtos nele
comercializados. Faça um programa que leia o preço de um produto e o estado (use 1 = MG; 2 = SP; 3 = RJ;
e 4 = ES), e mostre o preço final acrescido do imposto, de acordo com as seguintes taxas: MG = 12%; SP =
7%; RJ = 15%; ES = 8%. */

#include<stdio.h>
//start of the program
int main()
{
	float a;
	char state;
	printf("Enter the value of the product:\n");
	scanf("%f", &a);
	printf("Select your state (1/2/3/4):\n");
	scanf(" %c", &state);
	switch(state)
	{
		case '1': 
		a = a * 112/100;
		printf("%.2f\n", a);
		break;
		
		case '2':
		a = a * 107/100;
		printf("%.2f\n", a);
		break;
		
		case '3':
		a = a * 115/100;
		printf("%.2f\n", a);
		break;
		
		case '4':
		a = a * 108/100;
		printf("%.2f\n", a);
		break;
	}

	return 0;
}
