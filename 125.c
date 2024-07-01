/* Crie um programa que leia o número de linhas, colunas e os valores de uma matriz, fazendo alocação
dinâmica. A seguir, mostre o menor e maior valor digitados, bem como a linha e coluna em que se
encontram. */
#include<stdio.h>
#include<stdlib.h>

int main() {
	int **mat;
	int i, j, lin, col, ma, me;
	int malin, macol, melin, mecol; 
	
	printf("Enter the amount of lines and colunms:\n");
	scanf("%d %d", &lin, &col);
	
	mat = (int **)malloc(lin * sizeof(int));
	mat[0] = (int *)malloc(lin * col * sizeof(int));
	
	if(!mat || !mat[0]) exit(1);
	
	for(i = 1; i < lin; i++) {
		mat[i] = mat[i - 1] + col;
	}
	
	for(i = 0; i < lin; i++) {
		for(j = 0; j < col; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	
	ma = mat[0][0];
	me = mat[0][0];
	
	for(i = 0; i < lin; i++) {
		for(j = 0; j < col; j++) {
			if(ma < mat[i][j]) {
				ma = mat[i][j];
				malin = i;
				macol = j;
			}
			if(me > mat[i][j]) {
				me = mat[i][j];
				melin = i;
				mecol = j;
			}
		}
	}
	
	printf("Biggest value and position in the matrix are: %d [%d][%d]\n", ma, malin, macol);
	printf("Biggest value and position in the matrix are: %d [%d][%d]", me, melin, mecol);


	free(mat);

	return 0;
}
