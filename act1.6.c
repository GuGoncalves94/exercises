/* Uma das fórmulas alternativas para se calcular a área de um triângulo é a Fórmula de Herão, que dá o
valor da área em função da medida dos três lados do triângulo. A fórmula é dada por
𝐴 = √𝑝(𝑝 − 𝑎)(𝑝 − 𝑏)(𝑝 − 𝑐), onde a, b e c são as medidas dos lados e p é o semiperímetro (metade do
perímetro). Faça um programa que leia as medidas dos lados do triângulo e mostre o valor de sua área, com
uma única casa decimal. */

#include<stdio.h>
#include<math.h>
//start of the program
int main()
{
	float a, b, c, p, answer;
	//first print on the screen
	printf("Place the measurement on all three sides:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	p = (a + b + c) / 2;
	answer = sqrt( p * (p - a) * (p - b) * (p - c) );
	//second print on the screen
	printf("Triangle area is: %.1f\n", answer);
	
	return 0;
}
