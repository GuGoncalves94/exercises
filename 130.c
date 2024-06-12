/* Faça uma função booleana (devolve 0 = não, ou 1 = sim) que recebe um valor inteiro N e retorne se esse número é primo ou não. No Moodle, insira apenas a sua função (sem main, sem includes), que deve ter a seguinte assinatura: int primo(int n). O Moodle irá invocar sua função dentro de um printf para verificar a corretude. */

#include<stdio.h>

void booleana(int prime);

int main()
{
	int prime;
	
	scanf("%d", &prime);
      
      	booleana(prime);
	
	return 0;
}
void booleana (int prime) {
	int j, k;
	
	k = 1;	
       	for(j = 2; j < prime; j++) {  
        	if(prime % j == 0) {
        		k = 0;
        	       	break;
           	}
        }
       	if(k == 1) {
       		printf("1");
	}
	else {
		printf("0");
	}
	
}
