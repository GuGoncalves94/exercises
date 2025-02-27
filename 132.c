/* Faça uma função que recebe um valor N e retorne o somatório dos quadrados dos números de 1 a N. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura: int quadrados(int n) */

#include<stdio.h>

int quadrados(int n);

int main() {
	int n, soma;
	
	scanf("%d", &n);
	
	soma = quadrados(n);
	
	printf("%d", soma);
	
	return 0;
}

int quadrados(int n) {
	int i, soma = 0;
	
	for(i = 1; i <= n; i++) {
		soma = soma + (i * i); 
	}
	
	return soma;
}
