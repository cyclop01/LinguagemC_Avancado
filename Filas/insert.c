#include <stdio.h>
#include <stdlib.h>
#define tam 5

int vetor[tam];
int inicio, fim;

void insert(int valor){
int i;

if(fim == tam){
    printf("A fila está cheia\n");
    system("pause");
    return;
}

vetor[fim]=valor;
fim++;

 for(i=0;i<tam;i++){
        printf("Fila[%d]-->,valor[%d]\n",i,vetor[i]);
    }
  system("Pause");
}
