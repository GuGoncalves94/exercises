/* Seja a seguinte struct para representar pontos no espaço 2D:
struct Ponto
{
int x, y;
};
Faça uma função booleana (devolve 0 = não, ou 1 = sim) que receba um Ponto P e verifique se ele está
contido no interior de um retângulo. O retângulo é definido por dois pontos: o vértice inferior esquerdo (v1)
e o vértice superior direito (v2). Para todos os pontos, leia as coordenadas X e Y. No Moodle, insira seu
programa completo (main + funções). */

#include<stdio.h>
#include<stdbool.h> //true = 1 false = 0

typedef struct ponto {
	int x, y;
} ponto;

bool contido(ponto v1, ponto v2, ponto a);

int main() {	
	ponto a;
	ponto v1;
	ponto v2;
	bool answer;
	
	scanf("%d %d", &a.x, &a.y);
	scanf("%d %d", &v1.x, &v1.y);
	scanf("%d %d", &v2.x, &v2.y);
	
	answer = contido(v1, v2, p);
	
	printf("%d\n", answer);

	return 0;
}

bool contido(ponto v1, ponto v2, ponto a) {
	if(v1.x < a.x && v2.x > a.x) {
		if(v1.y < a.y && v2.y > a.y) {
			return true;
		}
	}
	else {
		return false;
	}
}
