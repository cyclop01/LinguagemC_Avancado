#include <stdio.h>
#include <stdlib.h>
#define tam 5

void insert(int valor);
void remover();
int inicio=0, fim=0;

int main(){
int op, valor=0;

while (op!=3){
system("cls");
printf("----Inserir na Fila[1]----\n");
printf("----Atender da Fila[2]----\n\n");
printf("----Sair[3]----\n\n");
scanf("%d", &op);

switch (op){
case 1:
    system("cls");
    printf("Digite o valor a ser inserido ...");
    scanf("%d", &valor);
    insert(valor);
    break;
case 2:
    remover();
}
}
return 0;
}
