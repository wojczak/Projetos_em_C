#include <stdio.h>

int main()
{
    int num[5] = {10, 200, 30, 40, 50};
    int maior = num[0];

    for (int i = 1; i < 5; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }
    printf("O maior numero e: %d\n", maior);
    return 0;
}