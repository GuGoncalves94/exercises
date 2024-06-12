/* Faça uma função que receba um vetor de inteiros e o seu tamanho, e devolva o valor do maior elemento presente no vetor. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura: int maxvet(int *vet, int n) */

#include<stdio.h>
#include<stdlib.h>

int maxvet(int *vet, int n);

int main() {
	int *vet;
	int n, i, answer;
	
	scanf("%d", &n);
	
	vet = (int *)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++) {
		printf("Enter the value of v[%d]\n", i);
		scanf("%d", (vet + i));
	}
	
	answer = maxvet(vet, n);
	
	printf("%d\n", answer);
	
	return 0;
}

int maxvet(int *vet, int n) {
	int i, maior; 
	
	maior = *(vet + 0);
	
	for(i = 0; i < n; i++) {
		if(maior < *(vet + i)) {
			maior = *(vet + i);
		}
	}

	return maior;
}
