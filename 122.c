/* Faça um programa que leia do usuário um número N e faça a alocação dinâmica de um vetor de N
posições. Usando aritmética de ponteiros, leia o vetor e mostre quantos dos números armazenados são pares
e quantos são ímpares. */

#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	int i, *v, par, impar;
	
	printf("Enter an integer:\n");
	scanf("%d", &a);
	
	v = malloc(a * sizeof(int));
	
	printf("Enter the values of array (a):\n");	
	//reading the values of array a
	for(i = 0; i < a; i++){
		scanf("%d", (v + i));
	}
	
	//checking amount of pairs and odd
	for(i = 0; i < a; i++){
		if(*(v + i) % 2 == 0) par++;
		else impar++;
	}
	
	printf("Amount of pairs: %d\n", par);
	printf("Amount of odds: %d\n", impar);
	
	return 0;
}
