/* A Copa do Mundo de 2026 será realizada na América do Norte. Bolas de futebol são muito fáceis de
transportar, já que elas saem das fábricas vazias e são enchidas somente pelas lojas ou pelos consumidores
finais. Infelizmente o mesmo não pode ser dito das bolas de boliche. Como elas são completamente sólidas,
elas só podem ser transportadas embaladas uma a uma, em caixas separadas. A SBI (Só Boliches
Internacional) é uma fábrica de bolas de boliche que trabalha somente através de encomendas e envia todas
as bolas via correios. Como as bolas têm tamanhos diferentes, a SBI tem vários tamanhos de caixas
diferentes para transportá-las. Escreva um programa que, dado o diâmetro de uma bola e as 3 dimensões de
uma caixa (altura, largura e profundidade), informe se a bola de boliche cabe dentro da caixa ou não. Seu
programa deve imprimir apenas as respostas “sim” ou “nao”. */

#include<stdio.h>
#include<math.h>
//start of the program
int main()
{
	float d, a, l, p, v1, v2;
	printf("Enter the ball diameter:\n");
	scanf("%f", &a);
	printf("Enter the three values on the sides of the box:\n");
	scanf("%f %f %f", &a, &l, &p);
	d = d/2;
	v1 = (4/3) * acos(-1) * cbrt(d);
	v2 = a * l * p;
	if(v1 > v2)
	{
		printf("nao\n");
	}
	else if(v2 >= v1)
	{
		printf("sim\n");
	}

	return 0;
}
