#include <stdio.h>
#include <string.h>

int main()
{
    char vogais[] = "aeiouAEIOU";
    int qtdvogais = strlen(vogais);
    char nome[50];
    int contador = 0;

    printf("Qual o seu nome?\n");
    fgets(nome, sizeof(nome), stdin);

    int qtd = strlen(nome);

    for (int i = 0; i < qtd; i++)
    {
        for (int j = 0; j < qtdvogais; j++)
        {
            if (nome[i] == vogais[j])
            {
                contador++;
            }
        }
    }
    printf("Seu nome tem %d vogais.\n", contador);
    return 0;
}