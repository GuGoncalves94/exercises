/* Faça uma função que receba um número N e retorne a quantidade de números primos menores que N existentes. No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura: int qtdprimos(int n) */

#include<stdio.h>

int qtdprimos(int n);

int main() {
	int n, answer;
	
	scanf("%d", &n);
	
	answer = qtdprimos(n);

	printf("%d\n", answer);
		
	return 0;
}

int qtdprimos(int n) {
	int qtd, i, j, check;
	
	if(n != 1) {
		for(i = 2; i <= n; i++) {
			check = 0;
			for(j = 2; j <= n; j++) {
				if(i % j == 0) {
					check++;
				}
			}
			if(check == 1) {
				qtd++;
			}
		}	
	}
	else {
		qtd = 1;
	}
	return qtd;
}
