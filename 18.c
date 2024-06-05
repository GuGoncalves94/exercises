/* Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-se usar 18 W
de potência. Faça um programa que leia as dimensões de um cômodo retangular (em metros), calcule e
mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada. Apresente a resposta em uma
linha, com os valores separados por um único espaço. */

#include<stdio.h>
//start of the program
int main()
{	
	float x, y, a, p;
	//first print on the screen
	printf("Enter the two dimension values:\n");
	scanf("%f", &x);
	scanf("%f", &y);
	a = x * y;
	p = a * 18;
	//second print on the scren
	printf("The area and amount of power in watts is: %.1f %.1f\n", a, p);
	
	return 0;
}
