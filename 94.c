/* Faça um programa que leia uma frase (string) contendo 4 valores numéricos reais de precisão dupla (double), separados por espaços. A seguir, seu programa deve separar cada número dos demais, convertê-lo para o formato numérico e exibir a soma dos números. */

#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
int main()
{
	char a[100], b[5], c[5], d[5];
	int i, j, k, l, qtd = 0, cx, cy, cz, cw;
	double x, y, z, w, soma;
	
	fgets(a, 100, stdin);
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			qtd++;
		}
		if(qtd == 1)
		{
			b[j] = a[i];
			j++;
		}
		if(qtd == 2)
		{
			c[k] = a[i];
			k++;
		}
		if(qtd == 3)
		{
			d[l] = a[i];
			l++;
		}
	}
	
	cx = cy = cz = cw = 0;

	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == '.')
		{
			x = atof(a);
			cx++;
		}
		if(cx == 0)
		{
			x = atoi(a);
		}	
	}
	
	for(j = 0; j < strlen(b); j++)
	{
		if(b[j] == '.')
		{
			y = atof(b);
			cy++;
		}
		if(cy == 0)
		{
			y = atoi(b);
		}
	}
	
	for(k = 0; k < strlen(c); k++)
	{
		if(c[k] == '.')
		{
			z = atof(c);
			cz++;
		}
		if(cz == 0)
		{
			z = atoi(c);
		}
	}
	
	for(l = 0; l < strlen(d); l++)
	{
		if(d[l] == '.')
		{
			w = atof(d);
			cd++;
		}
		if(cd == 0)
		{
			w = atoi(d);
		}
	}

	soma = x + y + z + w;
	
	printf("%lf", soma);

	return 0;
}
