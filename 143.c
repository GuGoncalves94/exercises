/* Faça uma função que receba um array de inteiros, seu tamanho (N) e duas variáveis inteiras. Armazene nessas variáveis o valor mínimo e máximo do array. O main deve ler N, ler o vetor, chamar a função e imprimir o menor valor separado do maior por um único espaço. Use apenas aritmética de ponteiros, isto é, faça este programa sem usar colchetes. No Moodle, insira seu programa completo (main + funções). */

#include<stdio.h>
#include<stdlib.h>

void mami(int *a, int n, int ma, int mi);

int main() {
	int *a;
	int i, n, ma, mi;
	
	scanf("%d", &n);
	
	a = (int *)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++) {
		scanf("%d", (a + i));
	}
	
	ma = *(a + 0);
	mi = *(a + 0);
	
	mami(a, n, ma, mi);
	
	return 0;
}

void mami(int *a, int n, int ma, int mi) {
	int i;
		
	for(i = 0; i < n; i++) {
		if(*(a + i) > ma) {
			ma = *(a + i);
		}
		if(*(a + i) < mi) {
			mi = *(a + i);
		}
	}
	
	printf("%d %d", mi, ma);
}
