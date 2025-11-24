#include <stdio.h>

void alteraidade(int *i);

int main()
{

    char nome[50];
    int idade;

    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite sua Idade:\n");
    scanf("%d", &idade);
    alteraidade(&idade);

    printf("Nome: %s", nome);
    printf("Idade: %d\n", idade);
}

void alteraidade(int *i)
{
    // int a = *i;
    *i = *i + 10;
}