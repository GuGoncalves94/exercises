/* Crie um programa que leia o número de linhas, colunas e os valores de uma matriz, fazendo alocação
dinâmica. A seguir, mostre o menor e maior valor digitados, bem como a linha e coluna em que se
encontram. */

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
