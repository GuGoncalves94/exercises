/* Um professor cobra R$ 50,00 por cada aula particular que ele ministra. Do total recebido no mês, ele
gasta 15% com a compra de materiais escolares. Faça um programa que leia quantas aulas o professor
ministrou, calcule e mostre:
a) seu ganho total.
b) seu gasto com materiais.
c) o quanto sobrou de seu salário após essas compras.
Imprima cada uma das respostas em uma linha separada. */

#include<stdio.h>
//start of the program
int main()
{
	float x, a, b, c;
	//first print on the screen
	printf("Number of classes taught:");
	scanf("%f", &x);
	a = x * 50;
	b = a * 15/100;
	c = a - b;
	//second print on the screen
	printf("Amount earned: %.2f\n", a);
	//third print on the screen
	printf("Expenditure on materials: %.2f\n", b);
	//fourth print on the screen
	printf("Remaining salary after purchases: %.2f\n", c);
	
	return 0;
}
