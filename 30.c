/* Faça um programa que resolva uma equação de segundo grau, na forma: ax2 + bx + c = 0. Caso a
equação possua duas raízes, imprima-as em uma mesma linha, sendo a raiz de menor valor impressa
primeiro e separada da maior raiz por um único espaço. Se a equação possuir apenas uma raiz, imprima
somente este valor. Caso a equação não possua raízes reais, imprima a mensagem “sem raizes reais”. */

#include<stdio.h> 
#include<math.h>
//start of the program
int main()
{
	float a, b, c, d, x1, x2;
	printf("Enter the values of a, b and c:\n");
	scanf("%f %f %f", &a, &b, &c);
	d = (b * b) - (4 * a * c);
	x1 = - b + (pow(d, 1/2) / (2 * a);
	x2 = - b - (pow(d, 1/2) / (2 * a);
	if(d < 0)
	{
		printf("sem raizes reais\n");
	} 
	else if (x1 != 0 && x2 != 0 && x1 > x2)
	{
		printf("%.2f %.2f\n", x2, x1);
	}
	else if (x1 != 0 && x2 != 0 && x2 > x1)
	{
		printf("%.2f %.2f\n", x1, x2);
	}
	else if (x1 != 0 && x2 == 0)
	{
		printf("%.2f", x1);
	}
	else if (x1 == 0 && x2 != 0)
	{
		printf("%.2f", x2);
	}

	return 0 ;
}
