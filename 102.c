/* Alice criou uma string S apenas com letras minúsculas do alfabeto. A partir de S, ela definiu uma string S' removendo todas as letras "a" de S, e mantendo as demais letras na ordem em que aparecem. Então, Alice formou uma nova string T concatenando as strings S e S’, isto é: T = S + S'. Por exemplo:

S  = "abacaxi"

S' = "bcxi"

T  = “abacaxibcxi”

Dada como entrada a string T, sua tarefa é encontrar a string S que Alice usou para produzir T. Considere que não haverão espaços na string de entrada. Além disso, a string de entrada pode conter entre 1 até 105 caracteres. Caso não exista uma resposta para a entrada fornecida, imprima -1. */

#include<stdio.h>
#include<string.h>
int main()
{
	char t[100000], a[100000], b[100000], ss[100000];
	int i, j, k, check = 0;
	
	scanf("%s", t);
	
	for(i = 0, j = 0; i < strlen(t); i++)
	{
		if(t[i] != 'a')
		{
			ss[j] = t[i];
			j++;
		}
	}
	
	for(j = 0; j < strlen(ss) / 2; j++)
	{
		a[j] = ss[j];
	}
	
	for(j = strlen(ss) / 2, k = 0; j <= strlen(ss); j++, k++)
	{
		b[k] = ss[j];
	}
	
	//comparison
	for(j = 0, k = 0; j < strlen(b); j++, k++)
	{
		if(a[j] != b[k])
		{
			check = 1;
		}
	}
	
	if(strlen(ss) % 2 == 1 || check == 1)
	{
		printf("-1");
		return 0;
	}
	else if(check == 0)
	{
		for(i = 0; i < strlen(t) - (strlen(ss) / 2); i++)
		{
			printf("%c", t[i]);
		}
	}
	
	return 0;
}
