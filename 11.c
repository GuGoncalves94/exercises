/* O volume de um cilindro é dado pela seguinte fórmula: V = πr2h, onde r é o valor raio, h é a sua altura e
π é uma constante matemática. Faça um programa que leia os valores de r e h e calcule o volume do cilindro
correspondente, com duas casas decimais. Use o valor de π com todas as suas casas decimais. */

#include<stdio.h> 
#include<math.h>
//start of the program
int main()
{
	float r, h, answer;
	//first print on the screen
	printf("Enter the radius value:");
	scanf("%f", &r);
	//second print on the screen
	printf("Enter the height value:");
	scanf("%f", &h);
	answer = acos(-1) * pow(r,2) * h;
	//third print on the screen
	printf("The volume value of the cylinder is: %.2f\n", answer);
	
	return 0;
}
