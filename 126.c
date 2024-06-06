/* Crie um programa que leia o número de linhas, colunas e os valores de uma matriz, fazendo alocação
dinâmica. A seguir, mostre o menor e maior valor digitados, bem como a linha e coluna em que se
encontram. */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, *p, lin, col, men, mai, idl, idc, idl1, idc1;
	
	//ask the value of lines and colunms to the user
	scanf("%d", &lin);
	scanf("%d", &col);
	
	p = malloc(lin * col * sizeof(int));
	
	for(i = 0; i < lin * col; i++) {
		scanf("%d", (p + i));
	}
	
	//searching for the biggest and lowest value
	mai = men = *(p + 0);
	for(i = 0; i < lin * col; i++) {
		if(*(p + i) > mai) {
			mai = *(p + i);
			idl = i / col;
			idc = i % col;
		}
		if(*(p + i) < men) {
			men = *(p + i);
			idl1 = i / col;
			idc1 = i % col;
		}
	}
	
	printf("Biggest number is (%d), located in (%d)(%d)\n", mai, idl, idc);
	printf("Lowest number is (%d), located in (%d)(%d)\n", men, idl1, idc1);	
	
	free(p);
		
	return 0;
}
