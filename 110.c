/* Declare uma estrutura para representar números complexos, formados por parte real e parte imaginária. A seguir, leia dois números complexos (parte real seguida de parte imaginária de cada um). Apresente como resposta a soma, a subtração e o produto dos números complexos, sendo um valor por linha. */

typedef struct nc
{
	float r;
	float i;
} nc;

#include<stdio.h>
int main()
{
	nc v[2];
	int j;
	float s, d, m, si, di, mi;
	
	for(j = 0; j < 2; j++)
	{
		scanf(" %f", &v[j].r);
		scanf(" %f", &v[j].i);
	}
	
	s = si = d = di = m = mi = 0;
	//calculating and printing de sum
	s = (v[0].r + (v[1].r));
	si = (v[0].i + (v[1].i));
    	printf("Soma: %f + ", s);
	printf("(%f)i\n", si);

	//calculating and printing the difference
	d = (v[0].r - (v[1].r)); 
	di = (v[0].i - (v[1].i));
	printf("Subtracao: %f + ", d);
	printf("(%f)i\n", di);
	//calculating and printing the multiplication
	m = ( v[0].r * (v[1].r) ) - ( v[0].i * (v[1].i) ); 
	mi = ( v[0].r * (v[1].i) ) +   ( v[1].r * (v[0].i) ) ;
	printf("Produto: %f + ", m);
	printf("(%f)i\n", mi);
	
	return 0;
}
