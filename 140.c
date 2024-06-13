/* Faça uma função booleana que receba duas strings A e B e verifique se a string A está contida no final da string B. A função deve retornar 0 (para não) ou 1 (para sim). No Moodle, insira apenas a sua função, que deve ter a seguinte assinatura: int afimb(char *a, char *b) */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int afimb(char *a, char *b);

int main() {
	char *a, *b;
	int answer, i;
	
	a = (char *)malloc(50 * sizeof(char));
	b = (char *)malloc(50 * sizeof(char));
	
	for(i = 0; i < 50; i++) {
		scanf(" %c", (a + i));
		if(*(a + i) == '\n') break;
	}
	
	for(i = 0; i < 50; i++) {
		scanf(" %c", (b + i));
		if(*(b + i) == '\n') break;
	}
	
	answer = afimb(a, b);
	printf("%d\n", answer);
	
	return 0;
}

int afimb(char *a, char *b) {
	int i, j, check;
	
	for(i = 0; i < strlen(a); i++) {
		for(j = 0; j < strlen(b); j++) {
			if(*(a + i) == *(b + j)) {
				check++;
				break;
			}
		}
	}
	
	if(check == strlen(a)) return 1;	
	else return 0;
}
