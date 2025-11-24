#include <stdio.h>
#include <stdlib.h>

int apresentacao(int *x);
int geratabuada(int *x);

int main()

{
    printf("Bem vindo a nossa Tabuada!\n\n");
    int escolha;
    do
    {

        apresentacao(&escolha);
        geratabuada(&escolha);
        /* code */
    } while (escolha != 0);
}

int apresentacao(int *x)
{
    int a;

    printf("Qual Tabuada vamos ver?\n");
    printf("Tecle 0 para sair\n");
    scanf("%d", &a);
    system("cls");
    *x = a;
    return 0;
}

int geratabuada(int *x)
{
    int a = *x;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }
    printf("\n\n");
    return 0;
}
