/* Faça um programa que leia números do teclado e os armazene em um vetor alocado
dinamicamente. O usuário irá digitar uma sequência de números, sem limite, sendo que a entrada de um
valor negativo encerra a leitura. Os dados devem ser armazenados na memória da seguinte forma:
• Inicie com um vetor de tamanho 10, alocado dinamicamente.
• Após este vetor estar cheio, aloque um novo vetor do tamanho do vetor anterior adicionando espaço
para mais 10 posições.
• Copie os valores anteriormente digitados para esta nova área maior e libere a memória inicial.
• Repita o procedimento de expandir dinamicamente com mais 10 valores sempre que o vetor estiver
cheio. */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int *p = NULL;
	int *q = NULL;
	int *t = NULL;
	int x, i, qtd, tam;
	
	p = malloc(tam * sizeof(int));
	
	scanf("%d", &x);
	while( x > 0) {
		p[qtd] = x;
		qtd++;
		if(qtd % 10 == 0) {		
			tam += 10;
			q = malloc(tam * sizeof(int));
			for(i = 0; i < tam -1; i++) q[i] = p[i];
			t = p;
			p = q;
			q = t;
		
			free(q);
			t = q = NULL;
		}
		
		scanf("%d", &x);
	}
	
	for(i = 0; i < qtd; i++) printf(">> %d\n", p[i]);

	free(p);
	
	return 0;
}
