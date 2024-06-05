/* Escreva um programa que declare um vetor de double de tamanho N (informado pelo usuário) e um ponteiro para um inteiro. Usando apenas aritmética de ponteiros, leia o vetor e mostre a média dos
elementos. A seguir, armazene no ponteiro o índice do elemento que tem o valor mais próximo da média e o exiba. */

#include<stdio.h>
#include<math.h>
int main() {
	int N, i, j, *p, aux;
	
	scanf("%d", &N);
	
	double v[N], *l, med, soma;
	
	for(i = 0; i < N; i++){
		scanf("%lf", &v[i]);
		l = &v[i];
		soma = soma + *l;
	}
	
	med = soma / N;
	printf("Average: %lf\n", med);
	
	for(i = 0; i < N; i++){
		for(j = i + 1; j < N; j++){
			if(fabs (v[i] - med) > fabs (v[j] - med))
			{	
				l = &v[j];
			}
		}
		
	}
	
	printf("%lf", *l);
	
	return 0;
}
