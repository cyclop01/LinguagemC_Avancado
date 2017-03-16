#include <stdio.h>
#include <stdlib.h>
#define con 3

void push(int valor);
int pop();
int pos=0;
int ret=0;

int main()
{
    int op=0, valor=0;
    while (op!=3)
    {
        system("cls");
        printf("----PUSH[1]----\n");
        printf("----POP [2]----\n\n");
        printf("----Sair[3]----\n\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            system("cls");
            printf("Digite o valor a ser inserido ...");
            scanf("%d", &valor);
            push(valor);
            break;
        case 2:
            pop();
            system("pause");
            break;
        }

    }
    return 0;
}
