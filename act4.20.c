/* Faça um programa que leia, indefinidamente, valores inteiros. Sempre que o usuário digitar um número
quadrado perfeito, armazene-o em um vetor de 10 posições. Assim que o décimo número quadrado perfeito
for armazenado, encerre a leitura e imprima, em uma única linha, os elementos do vetor separados entre si
por um único espaço. */

#include<stdio.h>
#include<math.h>
#define MAX 10
//start of the program
int main()
{
    int n[MAX], i, x, mult, raiz;
    
    i = 0;
    
    while(i < MAX)
    {
    	scanf("%d", &x);
    	raiz = sqrt(x);
    	mult = raiz * raiz;
    	if(mult == x)
    	{
    		n[i] = x;
    		i++
    	}
    }

    for(i = 0; i < MAX; i++)
    {
    	printf("%d ", n[i]);
    }

    
    return 0;
}
