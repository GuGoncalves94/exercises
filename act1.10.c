/* Faça um programa que leia um valor inteiro representando a quantidade de dias que uma pessoa viveu.
A seguir, mostre quantos anos, meses e dias a pessoa tem de vida. Por exemplo: 7790 dias correspondem a
21 anos, 4 meses e 5 dias. Imprima os valores de anos, meses e dias em uma única linha, separados por um
único espaço. */

#include<stdio.h>
//start of the program
int main()
{
	int a, b, c, d;
	//first print on the screen
	printf("Enter an entire number:\n");
	scanf("%d", &a);
	b = (a/365);
	c = (a%365/30);
	d = (a%365%30);
	//second print on the screen
	printf("Your age in years, months and days is: %d %d %d\n", b, c, d);
	return 0;
}
