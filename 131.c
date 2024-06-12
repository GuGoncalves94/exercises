/* Faça uma função que receba três notas de um aluno e uma letra. Se a letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; se for ‘P’, deve calcular a média ponderada, com pesos 5, 3 e 2. No Moodle, insira seu programa completo (main + funções). */

#include<stdio.h>

void aritmetica(float n1, float n2, float n3);
void media_ponderada(float n1, float n2, float n3);

int main() {
	float n1, n2, n3; 
	char letra;
	
	scanf("%f %f %f %c", &n1, &n2, &n3, &letra);
	
	if(letra == 'A') {
		aritmetica(n1, n2, n3);
	}
	else {
		media_ponderada(n1, n2, n3);
	}

	return 0;
} 

void aritmetica(float n1, float n2, float n3) {
	printf("%.2f", (n1 + n2 + n3) / 3);	
}

void media_ponderada(float n1, float n2, float n3) {
	printf("%.2f", ( (n1 * 5) + (n2 * 3) + (n3 * 2) ) / 10);
}
