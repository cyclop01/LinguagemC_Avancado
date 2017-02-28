#include <stdio.h>
#include <stdlib.h>
#define tam 5

int vetor[tam];
int inicio, fim;

void remover(){

    int aux;

    if(fim == inicio){
    printf("A fila está foi atendida totalmente\n");
    system("pause");
    return;
}
aux = vetor[inicio];
printf("Valor atendido: %d\n",aux);
inicio++;
system("pause");
}
