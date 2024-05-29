/* Faça um programa que leia dois valores. A seguir, mostre o resto da divisão do primeiro pelo segundo. */

#include<stdio.h>
//start of the program
int main()
{
	int a, b, answer;
	//first print on the screen
	printf("Enter two entire values:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	answer = a % b;
	//second print on the screen
	printf("Rest of the division: %d\n", answer);
	
	return 0;
}
