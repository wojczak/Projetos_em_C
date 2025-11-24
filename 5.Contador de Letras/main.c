#include <stdio.h>
#include <string.h>

int main()
{

    char nome[50];
    printf("Qual o Seu Nome?\n");
    fgets(nome, sizeof(nome), stdin);
    int contador = 0;
    contador = strlen(nome) - 1; // subtrai 1 para não contar o '\n' lido pelo fgets
    printf("Seu nome tem %d letras.\n", contador);
}