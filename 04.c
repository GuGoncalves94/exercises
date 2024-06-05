/*Um grupo de amigos pretende alugar um carro por um certo número de dias. Consultadas duas agências, a
primeira cobra R$ 62,00 pela diária e mais R$ 1,40 por km rodado. A segunda agência cobra diária de R$
80,00 e mais R$ 1,20 por km rodado. Escreva um programa que leia a quantidade de km a serem percorridos
e a quantidade de dias de aluguel do carro. A seguir, mostre, como resposta, uma única linha contendo o
valor cobrado pela primeira agência separado do valor cobrado pela segunda agência por um único espaço.*/

#include<stdio.h>
//start of the program
int main()
{
	float a, b, answer, resp;
	//first print on the screen
	printf("Number of kilometers:");
	scanf("%f", &a);
	//second print on the screen
	printf("Number of rental days:");
	scanf("%f", &b);
	answer = (1.40 * a) + (62.00 * b);
	resp = (1.20 * a) + (80.00 * b);
	//third print on the screen
	printf("First agency:%.2f Second agency:%.2f\n", answer, resp);	
	
	return 0;
}

