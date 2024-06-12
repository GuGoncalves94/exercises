/* Crie um programa que leia o número de linhas, colunas e os valores de uma matriz, fazendo alocação
dinâmica. A seguir, leia um valor do usuário e verifique se o valor digitado está contido na matriz. */

#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, **p, lin, col, inte;
	
	//ask the values of lines and colunms to the user
	scanf("%d", &lin);
	scanf("%d", &col);
	
	**p = (int *)malloc(lin * sizeof(int *));
	p[0] = malloc(lin * col * sizeof(int));
	
	for(i = 1; i < lin * col; i++) {
		scanf("%d", p[i]);
	}
	
	//ask an integer to the user
	scanf("%d", &inte);
	
	/* for(i = 0; i < lin * col; i++) {
		if(*(p + i) == inte) {
			printf("The integer (%d) appears on the matrix (%d) (%d)\n", inte, lin, col);
		}
	}  */
	
	free(p);
	
	return 0;
}
