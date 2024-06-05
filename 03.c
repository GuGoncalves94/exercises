/*A bula de um remédio pediátrico recomenda a seguinte dosagem: 5 gotas para cada 2kg de peso da
criança. Faça um programa que leia o peso da criança e mostre a quantidade de gotas a ser ministrada.*/

#include<stdio.h>
//start of the program
int main()
{
	int a, answer;
	//first print on the screen
	printf("Enter your weight:");
	scanf("%d", &a);
	answer = (a/2) * 5;
	//second print on the screen	
	printf("Quantity of drops will be: %d\n", answer);
	
	return 0;
}
