/*Faça um programa para calcular o valor de desconto de um produto pago à vista. O programa deve ler o
valor do produto (real) e a porcentagem de desconto à vista (inteiro entre 0 e 100). Imprima, como resposta,
uma única linha contendo o valor à vista separado do valor do desconto por um único espaço. Valores
monetários devem ser expressos com 2 casas decimais.*/

#include<stdio.h>
//start of the program
int main()
{ 
	float a, dis, answer, resp;
	//first print on the screen
	printf("Enter the value of the product:\n");
	scanf("%f", &a);
	//second print on the screen
	printf("Discount percentage:\n");
	scanf("%f", &dis);
	answer = a * (dis/100);
	resp = a;
	//third print on the screen
	printf("%.2f %.2f\n", resp, answer);
	
	return 0;
}
