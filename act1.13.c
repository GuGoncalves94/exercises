/* O volume de uma esfera é dado pela seguinte fórmula: V = 4πr3/3, onde r é o valor raio. Faça um
programa que leia o valor de r e calcule o volume da esfera correspondente. Use o valor de π com todas as
suas casas decimais. */

#include<stdio.h>
#include<math.h>
//start of the program
int main()
{
	float r, answer;
	//first print on the screen
	printf("Enter the radius value:");
	scanf("%f", &r);
	answer = (4 * acos(-1) * pow(r,3)) /3;
	//second print on the screen
	printf("The volume of the ball is: %f\n", answer);

	return 0;
}
