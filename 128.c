/* Faça um programa que leia números do teclado e os armazene em um vetor alocado
dinamicamente. O usuário irá digitar uma sequência de números, sem limite, sendo que a entrada de um
valor negativo encerra a leitura. Os dados devem ser armazenados na memória da seguinte forma:
• Inicie com um vetor de tamanho 10, alocado dinamicamente.
• Após este vetor estar cheio, aloque um novo vetor do tamanho do vetor anterior adicionando espaço
para mais 10 posições.
• Copie os valores anteriormente digitados para esta nova área maior e libere a memória inicial.
• Repita o procedimento de expandir dinamicamente com mais 10 valores sempre que o vetor estiver
cheio. */

//inicio do exercicio 128

#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, **p, lin, col;
	
	scanf("%d %d", &lin, &col);
	
	
	p = (int **)malloc(col * sizeof(int * ));
	p[0] = (int *)malloc (lin * col * sizeof(int));
	
	printf("antes");
	for(i = 1; i < col; i++) {
		p[i] = p[i - 1] + col;
		printf("dentro");
	}
		
	
	
		
	return 0;
}
