/* Faça uma função que receba dois valores A e B e retorne a soma dos valores no intervalo [A, B]. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura: int soma(int a, int b) */

#include<stdio.h>

int soma(int a, int b);

int main() {
	int a, b, answer;
	
	scanf("%d %d", &a, &b);

	answer = soma(a, b);
	
	printf("%d\n", answer);
	
	return 0;
}

int soma(int a, int b) {
	int i, soma;
	
	for(i = a; i <= b; i++) {
		soma = soma + i;
	}
	
	return soma;
}
