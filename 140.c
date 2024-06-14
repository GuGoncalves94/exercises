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

	if(a == NULL) exit(1);
	if(b == NULL) exit(1);
	
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

	free(a);
	free(b);
	
	return 0;
}

int afimb(char *a, char *b) {
	int i, j, check = 0;
		while(i < strlen(a)) {
			for(j = strlen(b) - strlen(a); j < strlen(b); j++) {
				if(*(a + i ) != *(b + j)) {
					return 0;
					check = 1;
					break;
				}
				else i++;
			}	
		}
		if(check == 0) return 1;
}
