/* Ler duas strings A e B e mostrar quantas vezes a string A ocorre dentro da string B */

#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
int main()
{
	char a[100], b[100];
	int i, j, check, qtd = 0;
	
	scanf("%[^\n]", a);
	scanf(" %[^\n]", b);
	
	for(i = 0; i < strlen(b); i++)
	{
		check = 0;
		for(j = 0; j < strlen(a); j++)
		{
			if(b[i + j] != a[j])
			{
				check = 1;
				break;	
			}
		}
		if(check == 0)
		{
			qtd++;
		}
	}

	printf("%d", qtd);
	
	return 0;
}
