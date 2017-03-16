#include <stdio.h>
#include <stdlib.h>
#define con 3

int pos;
int vetor[con];

int pop()
{

    if(pos == 0)
    {
        printf("Pilha vazia!!!\n");
        printf("-1");
        return -1;
    }
    pos--;
    printf("Valor %d retirado da pilha \n", vetor[pos]);
    return vetor[pos];
}


