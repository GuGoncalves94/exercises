/* Um aluno deseja saber qual a porcentagem de faltas que ele tem em uma disciplina. Faça um programa
que leia a carga horária total da disciplina e a quantidade de horas de faltas acumuladas, e mostre a
porcentagem de faltas do aluno (inteiro entre 0 a 100). */

#include<stdio.h>
//start of the program
int main()
{
	float a, b, answer;
	//first print on the screen
	printf("Enter the workload:\n");
	scanf("%f", &a);
	//second print on the screen
	printf("Number of hours of absence:\n");
	scanf("%f", &b);
	answer =( b / a )* 100;
	//third print on the screen 
	printf("Percentage of absence: %.0f percent\n", answer);
	
	return 0;
}
