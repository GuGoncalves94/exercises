/*Faça um programa que leia um número inteiro e mostre, como resposta, a soma de sua raiz cúbica com
sua raiz quarta. Considere 2 casas decimais.*/

#include<stdio.h>
#include<math.h> //Library that allows to use "cbrt"
//start of the program
int main()
{
	int a;
	float b, c, answer;
	//first print on the screen
	printf("Enter an entire number:");
	scanf("%d", &a); 
	b = cbrt(a); //cube root value 
	c = sqrt(a); //square root value
	answer = sqrt(c) + b; //plus a square root to extract the value from the fourth root  
	//second print on the screen 
	printf("%.2f\n", answer);

	return 0;
}
