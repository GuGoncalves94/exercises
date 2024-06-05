/* Crie uma estrutura para representar pontos em coordenadas polares: raio r e argumento a (em graus). Crie uma estrutura para representar pontos em coordenadas cartesianas: x e y. Leia 6 pontos em coordenadas polares e armazene em um vetor. A seguir, converta esses pontos para coordenadas cartesianas e armazene o resultado em outro vetor. A conversão é dada por: x = r * cos(a) e y = r * sen(a). Por fim, mostre o resultado de cada ponto em coordenadas cartesianas (x, y), com 2 casas decimais. Lembre-se que o valor do argumento deve estar em radianos para usar as funções cos e sin. */

#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 6

typedef struct polares
{
	float r;
	float a;	
} polares;

typedef struct cartesianas
{
	float x, y;
} cartesianas;

int main()
{
	polares v[N];
	cartesianas x[N];
	int i;
	
	for(i = 0; i < N; i++)
	{
		scanf("%f %f", &v[i].r, &v[i].a);
		v[i].a = v[i].a * acos(-1) / 180;
	}
	
	//Converting Points to Cartesian Coordinates
	for(i = 0; i < N; i++)
	{	
		x[i].x = v[i].r * cos(v[i].a);
		x[i].y = v[i].r * sin(v[i].a);
	}
	
	//printing the cartesian coordinates 
	for(i = 0; i < N; i++)
	{
		printf("(%.2f, %.2f)\n", x[i].x, x[i].y);
	}

	return 0;
}
