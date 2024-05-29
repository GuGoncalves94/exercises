/* Leia duas frases e mostre a diferença de tamanho entre elas. Sua saída deve estar no padrão: "A frase 1 possui X caracteres a mais/menos que a frase 2." */
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int answer = 0, tama, tamb;
	
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	
	printf("%lu", strlen(a));
	printf("%lu", strlen(b));
	
	if(strlen(a) > strlen(b))
	{
		answer = (strlen(a) - 1) - (strlen(b) - 1);
		printf("A frase 1 possui %d caracteres a mais que a frase 2.", answer);
	}
	else if(strlen(a) < strlen(b))
	{
		answer = (strlen(b) - 1) - (strlen(a) - 1); 
		printf("A frase 1 possui %d caracteres a menos que a frase 2.", answer);
	}

	return 0;
}
