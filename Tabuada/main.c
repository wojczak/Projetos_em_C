#include <stdio.h>

int apresentacao(int *x);
int geratabuada(int *x);

int main()
{
    int escolha;
    apresentacao(&escolha);
    geratabuada(&escolha);
}

int apresentacao(int *x)
{
    int a;
    printf("Bem vindo a nossa Tabuada!\n\n");
    printf("Qual Tabuada vamos ver?\n");
    scanf("%d", &a);
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
