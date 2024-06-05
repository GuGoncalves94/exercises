/* Faça um programa que leia o nome, a idade e o endereço (rua e número) de uma pessoa e armazene os dados em uma estrutura. Mostre na tela as informações armazenadas */

#include<stdio.h>

typedef struct endereco
{
	char rua[100];
	int num;
} endereco;
typedef struct pessoa
{
	char nome[50];
	int idade;
	endereco ender;
	
}pessoa;

int main()
{
	pessoa a;
	
	scanf("%[^\n]", a.nome);
	scanf(" %d", &a.idade);
	scanf(" %[^\n]", a.ender.rua);
	scanf(" %d", &a.ender.num);
	
	printf("Nome: %s\nIdade: %d\nEndereco: %s, %d", a.nome, a.idade, a.ender.rua, a.ender.num);

	return 0;
}
