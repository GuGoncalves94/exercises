/* Faça um programa que leia um vetor de estrutura com os dados de 8 carros: marca, preço e ano. A seguir, leia um valor P e mostre as informações de todos os carros com preço menor que P. Repita esse processo até que seja lido um valor P ≤ 0. */

#include<stdio.h>
#include<string.h>
#define N 8
typedef struct carros
{
	char marca[50];
	float preco
	int ano;
} carros;

int main()
{
	carros v[N];
	int i;
	float price;
	
	for(i = 0; i < N; i++)
	{
		scanf(" %[^\n]", v[i].marca);  
		scanf(" %f", &v[i].preco);
		scanf(" %d", &v[i].ano);
	}
	
	scanf(" %f", &price);
	while(price > 0)
	{	
		printf("Carros maus baratos que %.2f:\n", price);
		//searching values under the price and printing on stdout
		for(i = 0; i < N; i++)
		{
			if(price > v[i].preco && price > 0)
			{
				printf("%s %.2f %.2f\n", price, v[i].marca, v[i].preco, v[i].ano);
			}
		}
		printf("\n");
		scanf("%f", &price);
	}
	
	return 0;
}
