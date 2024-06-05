/* Faça um programa que leia o valor de ângulo, dado em graus, e mostre, com 2 casas decimais, os valores
de seno, cosseno e tangente do ângulo lido, em uma única linha, separados por um único espaço. */

#include<stdio.h>
#include<math.h>
//start of the program
int main()
{
	float a, s, c, t;
	//first print on the screen
	printf("Enter the angle value:");
	scanf("%f", &a);
	s = sin(a * acos(-1) /180);
	c = cos(a * acos(-1) /180);
	t = tan(a * acos(-1) /180);
	//second print on the screen
	printf("%.2f %.2f %.2f\n", s, c, t);

	return 0;
}
