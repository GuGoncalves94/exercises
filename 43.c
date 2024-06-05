/* Faça um programa que leia dois inteiros A e B, calcule e mostre: a soma dos números pares no intervalo
[A, B] e o produto dos números ímpares no intervalo [A, B]. Imprima as duas respostas em uma única linha,
separadas entre si por um único espaço. */

#include<stdio.h>
//start of the program
int main()
{
	int a, b, i, aux, soma, multi;
	
	scanf("%d %d", &a, &b);
	
	multi = 1;
	
	for(i = a; i <= b; i++)
	{
	 	aux = i % 2;
	 	if(aux == 0)
	 	{
	 		soma = soma + i;
	 	}
	 	else if(aux != 0)
	 	{
	 	 	multi = multi * i;
	 	}
	 }
	 
	 	printf("%d %d", soma, multi);

	return 0;
}
