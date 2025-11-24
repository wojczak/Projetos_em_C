#include <stdio.h>

int main()
{
    int numeros[5] = {10, 20, 30, 40, 50};
    int busca;
    do
    {
        printf("Digite um numero para buscar no array ou 0 para sair.\n");
        scanf("%d", &busca);

        for (int i = 0; i < 5; i++)
        {
            if (busca == numeros[i])
            {
                printf("Seu Numero esta na posicao %d do  array.\n\n\n", i);
                break;
            }
            if (i == 4)
                printf("Numero nao encontrado no array.\n\n");
        }

    } while (busca != 0);

    return 0;
}