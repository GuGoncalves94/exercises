/* Faça um programa que leia um número inteiro longo representando o CPF de uma pessoa e, a seguir, mostre o número de vezes que cada dígito aparece no CPF. Siga o formato de saída apresentado no exemplo do Moodle. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9; 
	
	fgets(a, 100, stdin);
	
	x0 = x1 = x2 = x3 = x4 = x5 = x6 = x7 = x8 = x9 = 0;
	
	for(i = 0; i < strlen(a); i++)
	{
		switch(a[i])
		{
			case '0':
			x0++;
			break;
			case '1':
			x1++;
			break;
			case '2':
			x2++;
			break;
			case '3':
			x3++;
			break;
			case '4':
			x4++;
			break;
			case '5':
			x5++;
			break;
			case '6':
			x6++;
			break;
			case '7':
			x7++;
			break;
			case '8':
			x8++;
			break;
			case '9':
			x9++;
			break;
		}
	} 
	
	printf("0 = %d\n1 = %d\n2 = %d\n3 = %d\n4 = %d\n5 = %d\n6 = %d\n7 = %d\n8 = %d\n9 = %d\n", x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
	
	return 0;
}
