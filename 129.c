/* Faça uma função que receba uma data e exiba-a na tela no formato textual por extenso. Exemplo: para
01/01/2000, imprimir: 1 de janeiro de 2000. Seu scanf deve ler a data no formato dd/mm/aaaa. No Moodle,
insira seu programa completo (main + funções). */

#include<stdio.h>

char *getmes(int mes);

int main() {
	char *answer;
	int dia, mes, ano;
	
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	answer = getmes(mes);

	printf("%d de %s de %d", dia, answer, ano);

	return 0;
}

char *getmes(int mes) {
	char* getmes;
	switch(mes){
		case 1 : mes = 1;
			getmes = "janeiro";
			break;
		case 2: mes = 2;
			getmes = "fevereiro";
			break;
		case 3: mes = 3;
			getmes = "marco";
			break;
		case 4: mes = 4;
			getmes = "abril";
			break;
		case 5: mes = 5;
			getmes = "maio";
			break;
		case 6: mes = 6;
			getmes = "junho";
			break;
		case 7: mes = 7;
			getmes = "julho";
			break;
		case 8: mes = 8;
			getmes = "agosto";
			break;
		case 9: mes = 9;
			getmes = "setembro";
			break;
		case 10:mes = 10;
		getmes = "outubro";
			break;
		case 11:mes = 11;
			getmes = "novembro";
			break;
		case 12:mes = 12;
			getmes = "dezembro";
			break;
	}
	
	return getmes;
}	
