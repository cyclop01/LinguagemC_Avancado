#include <stdio.h>
#include <stdlib.h>
#define con 3

int pos;
int vetor[con];

void push(int valor)
{

    int i;

    if(pos == con)
    {
        printf("A pilha está cheia\n");
        system("pause");
        return;
    }

    vetor[pos] = valor;
    pos++;
    for(i=0; i<con; i++)
    {
        printf("Pilha[%d]-->,valor[%d]\n",i,vetor[i]);
    }
    system("Pause");
}


