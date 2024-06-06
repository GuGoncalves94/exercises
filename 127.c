/* Crie um programa que aloque e leia uma matriz X. A seguir, aloque uma segunda matriz Y, tal que Y
seja a transposta de X. Mostre as duas matrizes na tela. */

#include<stdio.h>
#include<stdlib.h>
int main() {
	int *p, *m, lin, col, i, check, qtd;
	
	//ask the amount of lines and colunms
	scanf("%d", &lin);
	scanf("%d", &col);
	
	p = malloc(lin * col * sizeof(int));
	
	for(i = 0; i < lin * col; i++ ) {
		scanf("%d", (p + i));
	}
	
	m = malloc(lin * col * sizeof(int));
	
	check = 0;
	qtd = 1;
	for(i = 0; i < lin * col; i++) {
		if(i % col == 0) {
			*(m + i) = *(p + check);
			check += col;
		}
		else {
			*(m + qtd) = *(p + i);
			qtd += col;
		}	
	}
	
	//printing the matrix transpose
	for(i = 0; i < lin * col; i++) {
		printf("%d", *(m + i));
	}
	

	free(p);
	free(m);
	
	return 0;
}
