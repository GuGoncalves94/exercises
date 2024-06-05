/* Faça um programa que leia três valores representando a idade da pessoa em anos, meses e dias. A seguir,
mostre quantos dias a pessoa viveu. Por exemplo: 21 anos, 4 meses e 5 dias correspondem a 7790 dias. Para
fins de cálculo, considere que todos os anos possuem 365 dias e todos os meses possuem 30 dias. */

#include<stdio.h>
//start of the program
int main()
{
	int a, m, d, answer;
	//first print on the screen
	printf("Enter your age in years, months and days respectively:\n");
	scanf("%d", &a);
	scanf("%d", &m);
	scanf("%d", &d);
	answer = (a * 365) + (m * 30) + d;
	//second print on the screen
	printf("You survived %d\n", answer);

	return 0;
}
