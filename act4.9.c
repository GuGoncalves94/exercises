/* Faça um programa que leia 6 inteiros e os armazene em um vetor. A seguir, imprima em uma única linha
as posições do maior e do menor elementos presentes no vetor, separadas entre si por um único espaço. */

#include<stdio.h>
#define MAX 6
//start of the program
int main()
{
	int i, n[MAX], maior, menor, posx, posy;
	
	for(i = 0; i < MAX; i++)
	{
		scanf("%d",&n[i]);
	}
	
	maior = n[0];
	menor = n[0];
	posx = 0;
	posy = 0;
	
	for(i = 0; i < MAX; i++)
	{
		if(maior < n[i])
		{
			maior = n[i];
			posx = i;
		}
		else if(menor > n[i])
		{
			menor = n[i];
			posy = i;
		}
	}
	
	printf("%d ", posx);
	printf("%d", posy);	
	
	return 0;
}
