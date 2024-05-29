/* Um hotel com 80 quartos deseja fazer uma promoção especial de feriado, concedendo um desconto de
25% na diária. Com isto, espera-se aumentar sua taxa de ocupação de 50% para 80%. Dado o valor normal
da diária, calcule e mostre:
a) o valor da diária promocional.
b) o valor arrecadado com 80% de ocupação e diária promocional.
c) o valor arrecadado com 50% de ocupação e diária normal.
d) a diferença entre esses dois valores.
Imprima cada uma das respostas em uma linha separada. */

#include<stdio.h>
//start of the program
int main()
{
	float x, a, b, c, d;
	//first print on the screen
	printf("Enter the daily rate:");
	scanf("%f", &x);
	a = x * 75/100;
	b = 64 * a;
	c = 40 * x;
	d = b - c;
	//second print on the screen
	printf("Daily rate promotion: %.2f\n", a); 
	//third print on the screen
	printf("Amount of value earned with 80 percent occupation with daily promotion: %.2f\n", b);
	//fourth print on the screen
	printf("Amount of value earned with 50 percent occupation without daily promotion: %.2f\n", c);
	//fifth print on the screen
	printf("Difference between the two values: %.2f\n", d);
	
	return 0;
}
