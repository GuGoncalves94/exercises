/* Faça um programa que leia um inteiro X e mostre a diferença entre o quadrado da soma pela soma dos
quadrados dos X primeiros números naturais.
Exemplo: seja X = 10:
Quadrado da soma: (1 + 2 + ... + 10)2 = (55)2 = 3025
Soma dos quadrados: (12 + 22 + ... + 102) = 385
Diferença: 3025 – 385 = 2640 */

#include<stdio.h>
#include<math.h>
//start of the program
int main()
{
	int x, i, y, z, soma, answer;
	
	scanf("%d", &x);
	
	soma = 0;
	
	for(i = 0; i <= x; i++)
	{
	 	soma = soma + i;
	}
 	
 	i = pow(soma,2);
 	soma = 0;
 	
  	for(y = 0; y <= x; y++)
	{
		z = pow(y,2);
		soma = soma + z;
	}
	
	answer = i - soma;
	printf("%d\n", answer);
	
	return 0;
}
