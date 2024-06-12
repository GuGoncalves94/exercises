/* Faça uma função que receba um vetor de inteiros e o seu tamanho, e devolva a média dos seus elementos. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura: double avgvet(int *vet, int n) */

#include<stdio.h>
#include<stdlib.h>

double avgvet(int *vet, int n);

int main() {
	int *vet;
	int n, i;
	double answer;
	
	scanf("%d", &n);
	
	vet = (int *)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++) {
		printf("Enter the value of v[%d]:\n", i);
		scanf("%d", (vet + i));
	}

	answer = avgvet(vet, n);
	
	printf("%lf", answer);

	return 0;
}

double avgvet(int *vet, int n) {
	int i, soma;
	double answer;
	
	for(i = 0; i < n; i++) {
		soma = soma + *(vet + i);
	}

	answer = soma / n;
	
	return answer;
}
