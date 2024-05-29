/* Faça um programa que leia 10 inteiros e os armazene em um vetor. A seguir, imprima em uma única
linha quais são o menor, o segundo menor e o terceiro menor elementos presentes no vetor, separados entre
si por um único espaço. */

#include <stdio.h>
#define MAX 10
//start of the program
int main()
{
    int v[MAX];
    int i, j, t;

    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < MAX; i++)
    {
        for (j = i + 1; j < MAX; j++)
        {
            if (v[i] > v[j])
            {
                t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }
    
    printf("%d %d %d", v[0], v[1], v[2]);

    return 0;
}
