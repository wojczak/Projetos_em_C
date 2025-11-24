#include <stdio.h>

void opcao();
int chamafuncao(int escolha);
int soma();
int subtracao();
int multiplicacao();
int divisao();

int main()
{

    int resultado, escolha;

    printf("***********************************************\n");
    printf("* Bem Vindo a Minha Primeira Calculadora em C!*\n");
    printf("***********************************************\n\n");

    printf("Escolha o que quer fazer\n\n");
    opcao();
    scanf("%d", &escolha);
    resultado = chamafuncao(escolha);
    printf("O resultado e: %d\n\n", resultado);
}

// funcao para escolher a opcao
void opcao()
{
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n\n");
}

int chamafuncao(int escolhido)
{
    int result;

    switch (escolhido)
    {
    case 1:
        result = soma();
        break;
    case 2:
        result = subtracao();
        break;
    case 3:
        result = multiplicacao();
        break;
    case 4:
        result = divisao();
        break;
    case 5:
        printf("Saindo...");
        break;
    default:
        printf("Opcao invalida, tente novamente\n");
    }
    return result;
}

int soma()
{
    int a, b;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    int resultado = a + b;
    return resultado;
}

int subtracao()
{
    int a, b;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    int resultado = a - b;
    return resultado;
}

int multiplicacao()
{
    int a, b;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    int resultado = a * b;
    return resultado;
}

int divisao()
{
    int a, b;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    if (b == 0)
    {
        printf("Erro: Divisao por zero nao e permitida.\n");
        return 0;
    }
    int resultado = a / b;
    return resultado;
}
