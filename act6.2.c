/* Modifique o programa anterior para contar a quantidade de cada vogal (Faça um programa que leia uma frase e conte quantas vogais a frase possui no total.). Siga o formato de saída apresentado no exemplo do Moodle. */

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int qtda, qtdo, qtdu, qtdi, qtde, i; 
	
	scanf("%[^\n]", a);
	
	qtda = qtde = qtdu = qtdi = qtdo = 0;
	
	for(i = 0; i < strlen(a); i++)
	{
		switch(a[i])
		{		
			case 'a':
			case 'A':
			qtda++;
			break;
			
			case 'e':
			case 'E':
			qtde++;
			break;
			
			case 'o':
			case 'O':
			qtdo++;
			break;
			
			case 'i':
			case 'I':
			qtdi++;
			break;
			
			case 'u':	
			case 'U':
			qtdu++;
			break;		
		}
	} 
	
	printf("A = %d \nE = %d \nI = %d \nO = %d \nU = %d", qtda, qtde, qtdi, qtdo, qtdu);

	return 0;
}
