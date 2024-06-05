/* Faça um programa que leia 10 valores reais e os armazene em um vetor v. A seguir, calcule, com 1 casa
decimal, o desvio padrão amostral dos elementos no vetor, de acordo com a seguinte expressão, onde n é a
quantidade de elementos e m é a média:
desvio padrão = 1 / N - 1 * somat (v[i] - m)^2  */

#include<stdio.h>
#include<math.h>
#define MAX 10
//start of the program
int main()
{
    int i;
    float n[MAX], med, soma;
    
    med = 0;
    soma = 0;
    
    for(i = 0; i < MAX; i++)
    {
        scanf("%f", &n[i]);
        med += n[i]; 
    }
    
    med = med / 10.0;
    
    for(i = 0; i < MAX; i++)
    {
        soma += ( (n[i] - med) * (n[i] - med));
    }
    
    soma = soma / 9.0;
    soma = sqrt(soma);
    printf("%.1f", soma);
    
    return 0;
}
