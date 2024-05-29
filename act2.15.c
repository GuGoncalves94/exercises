/* Faça um programa que verifique se um número lido é divisível por 3 ou por 5, mas não pelos dois ao
mesmo tempo. Imprima como resposta apenas as frases: “divisivel por 3”, “divisivel por 5”, “nao
divisivel”, de acordo com a entrada recebida. */

#include<stdio.h>
//start of the program
int main()
{
	int a, b, aux;
	printf("Enter a number:\n");
	scanf("%d", &a);
	b = a % 5;
	aux = a % 3;
	if(b == 0 && aux != 0)
	{
		printf("divisivel por 5\n");
	}
	else if(aux == 0 && b != 0)
	{
		printf("divisivel por 3\n");
	}
	else if(b != 0 && aux != 0)
	{
		printf("nao divisivel\n");
	}
	else if(b == 0 && aux == 0)
	{
		printf("nao divisivel\n");
	}
	
	
	return 0;
}
