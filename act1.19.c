/* Uma máquina demora 17 segundos para produzir uma peça. Faça um programa que leia a quantidade de
peças que devem ser produzidas e mostre o tempo em horas, minutos e segundos necessários para produzir
essa quantidade de peças. Por exemplo, se um operador deseja produzir 4 peças, a máquina gastaria 68
segundos. Nesse caso, o programa daria como resposta: 0 horas, 1 minuto e 8 segundos. Em sua resposta,
indique somente os números, separados por um único espaço entre eles. Por exemplo: 0 1 8. */

#include<stdio.h>
//start of the program
int main()
{
	int a, b, c, d;
	//first print on the scren
	printf("Enter the quantity of pieces:\n");
	scanf("%d", &a);
	b = (a * 17) / 3600;
	c = ((a * 17) % 3600) / 60;
	d = ((a * 17) % 3600) % 60; 
	//second print on the screen
	printf("%d %d %d \n", b, c, d);
	
	return 0;
}
