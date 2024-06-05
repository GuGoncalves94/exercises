/* Faça um programa que leia, indefinidamente, valores inteiros. Sempre que o usuário digitar um número
primo, armazene-o em um vetor de 10 posições. Assim que o décimo número primo for armazenado, encerre
a leitura e imprima, em uma única linha, os elementos do vetor separados entre si por um único espaço. */

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int a[MAX], i, j, k, prime, control;

	i = 0;
	
	while(i < MAX)
	{
        	k = 1;
        	scanf("%d", &prime);
        	for(j = 2; j < prime; j++)
        	{
        		control = prime % j; 
        		if(control == 0)
        	        {
        			k = 0;
        	        	break;
           		}
        	}
       		if(k == 1 && prime != 1)
        	{
       			a[i] = prime;
            		i++; 
        	}
    	}
	
	for(i = 0; i < MAX; i++)
	{
	    printf("%d ", a[i]);
	}
	
    return 0;
}
