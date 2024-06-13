/* Faça uma função que receba um valor N e dois vetores de tamanho N. A função deve alocar um terceiro vetor, formado pela soma dos dois vetores recebidos e devolvê-lo ao main. Por fim, o main imprime o vetor soma, sendo um elemento separado do outro por um único espaço. Use apenas aritmética de ponteiros, isto é, faça este programa sem usar colchetes. O main deve ler o valor N, alocar e ler os dois vetores. No Moodle, insira seu programa completo (main + funções). */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int aloca(int n, int *a, int *b);

int main() {
	int n, i;
	int *a, *b, *answer;
	
	scanf("%d", &n);
	
	a = (int *)malloc(n * sizeof(int));
	b = (int *)malloc(n * sizeof(int));
	
	if(a == NULL) exit(1);
	if(b == NULL) exit(1);
	
	
	//reading a
	for(i = 0; i < n; i++) {
		scanf("%d", (a + i));
	}
	
	//reading b
	for(i = 0; i < n; i++) {
		scanf("%d", (b + i));
	}

	answer = aloca(n, *a, *b);
		
	for(i = 0; i < strlen(answer); i++) {		
		printf("%d ", *(answer + i));
	}
	
	free(a);
	free(b);
	free(answer);
	
	return 0;
}

int aloca(int n, int *a, int *b) {
	int *answer;
	int i;
	
	answer = (int *)malloc((n + n + 1) * sizeof(int));
	
	strcpy(answer, a);
	strcpy(answer, b);

	return answer;
}	
