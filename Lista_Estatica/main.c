#include <stdio.h>
#include <stdlib.h>
#define tamanho 2

//Prototipagem de Funções
void menu();
void exibir();
void ordenar();
void remover(int valor);
int contar();
int b_valor(int valor);
int b_indice(int valor);
int inserir(int valor);

//Prototipagem de Variáveis
int lista[tamanho];
int posicao=0;

int main()
{
    int opcao=0, valor=0;
    while(opcao!=8)
    {
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch (opcao)
        {
//---------------------------------------------------------------------------------//
        case 1:
            system("cls");
            printf("Insira o valor...\n");
            scanf("%d",&valor);
            inserir(valor);
            break;
        case 2:
            system("cls");
            printf("Insira o valor...\n");
            scanf("%d",&valor);
            remover(valor);
            break;
        case 3:
            system("cls");
            printf("Foram inseridos -|%d|- elementos na lista\n", contar());
            system("pause");
            break;
        case 4:
            system("cls");
            printf("Insira o valor do elemento...\n");
            scanf("%d",&valor);
            printf("O valor -|%d|- encontra-se no indice -|%d|- \n",valor, b_valor(valor));
            system("pause");
            break;
        case 5:
            system("cls");
            printf("Insira o indice do elemento...\n");
            scanf("%d",&valor);
            printf("O Indice -|%d|- retorna o valor -|%d|- \n",valor, b_indice(valor));
            system("pause");
            break;
        case 6:
            system("cls");
            exibir();
            break;
        case 7:
            system("cls");
            ordenar();
            printf("Ordenando valores .......\n");
            system("pause");
            break;
//---------------------------------------------------------------------------------//
        }
    }

    return 0;
}
void menu()
{
    printf("1 - Inserir\n");
    printf("2 - Excluir\n");
    printf("3 - Contar Elementos\n");
    printf("4 - Busca por Valor\n");
    printf("5 - Busca por Indice\n");
    printf("6 - Exibir Elementos\n");
    printf("7 - Ordenar Elementos\n\n");
    printf("8 - Sair\n\n");
}

void exibir()
{
    int i;
    for(i=0; i<posicao; i++)
    {
        printf("Indice .. %d   | Valor .. %d\n",i,lista[i]);
    }
    system("pause");
}

int contar()
{
    int i,count=0;
    for(i=0; i<posicao; i++)
    {
        count++;
    }
    return count;
}

int inserir(int valor)
{
    int i;
    if (posicao > tamanho)
    {
        printf("lista cheia\n");
        return -1;
    }
    lista[posicao]=valor;
    posicao++;
    for(i=0; i<posicao; i++)
    {
        printf("Indice .. %d   | Valor .. %d\n",i,lista[i]);
    }
    system("pause");
    return 0;
}

void remover(int valor)
{
    int i;
    i=b_valor(valor);
    if(i==(-1))printf("valor invalido");
    for(; i<posicao; i++)
    {
        lista[i]=lista[i+1];
    }
    posicao--;
}

int b_valor(int valor)
{
    int i=0;
    for(i=0; i<posicao; i++)
    {
        if (lista[i]==valor)return i;
    }
    return -1;
}

int b_indice(int valor)
{
    if(valor<0 || valor>posicao)return -1;
    return lista[valor];
}

void ordenar()
{
    int i=0;
    int j=0;
    int aux=0;
    for(i=0; i < (posicao - 1) ; i++)
    {
        for(j=i+1; j < posicao; j++)
        {
            if(lista[i]>lista[j])
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
}
