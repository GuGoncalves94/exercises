/* Faça uma função que receba um número N e retorne a soma dos algarismos do fatorial de N. No Moodle,
insira apenas a sua função, que deve ter a seguinte assinatura:
int somafat(int n) */

#include<stdio.h>

int somafat(int n);

int main() {
	int n, answer;

	scanf("%d", &n);
 
 	answer = somafat(n);
 
	printf("%d", answer);
	
	return 0;
}

int somafat(int n) {
	int soma = 0, i;
	long long int fat = 1;
	
	for(i = 1; i <= n; i++) {
		fat = fat * i; 
	}
	
	while(fat > 0) {
		soma += fat % 10;
		fat -= fat % 10;
		fat = fat / 10;
	}
	
	return soma;
}
