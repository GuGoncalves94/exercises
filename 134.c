/* Faça uma função que recebe um valor N e retorne o valor da soma dos N primeiros termos da série: S = 0 + 1/2! + 2/4! + 3/6! + 4/8! + ... O código deve declarar, também, uma função que calcule o fatorial e seja usada pela função da série. No Moodle, insira apenas as suas funções, que deve ter as seguintes assinaturas: long long int fatorial(int x) double serie(int n) */

#include<stdio.h>

long long int fatorial(int x);
double serie(int n);

int main() {
	int n;
	float answer;
	
	scanf("%d", &n);
	
	answer = serie(n);
	
	printf("%f", answer);

	return 0;
}
long long int fatorial(int x) {
	long long int fat = 1;
	int i;
	
	for(i = 1; i <= x; i++) {
		fat = fat * i;
	}
			
	return fat;
}

double serie(int n) {
	int i;
	double serie = 0;
	
	for(i = 0; i < n; i++) {
		serie = serie + (double) i / (long long int)fatorial(i * 2);
	}
	
	return serie;
}
