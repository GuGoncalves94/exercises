/* Crie um programa que aloque e leia uma matriz X. A seguir, aloque uma segunda matriz Y, tal que Y
seja a transposta de X. Mostre as duas matrizes na tela. */

#include<stdio.h>
#include<stdlib.h>
int main() {
	int *p, *m, lin, col, lin1, col1, i, j;
	
	//ask the amount of lines and colunms
	scanf("%d", &lin);
	scanf("%d", &col);
	
	p = malloc(lin * col * sizeof(int));
	
	for(i = 0; i < lin * col; i++ ) {
		scanf("%d", (p + i));
	}
	
	m = malloc(lin * col * sizeof(int));
	
	lin1 = col;
	col1 = lin;
	j = 0;
	
	for(i = 0; i < lin * col; i++) {
		if(i % col == 0 && j < lin) { //takes the first line 
			(m + j) = (p + i);
			j++;
		}
		else {
			(m + lin + i) = (p + i);
		}
	
	}
	
	//printing the matrix transpose
	for(j = 0; j < lin * col; j++) {
		printf("%d", *(p + i));
	}
	

	free(p);
	free(m);
	
	return 0;
}
