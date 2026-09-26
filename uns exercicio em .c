#include <stdio.h>


int dobro(int numero) 
{
    return numero * 2;
}


void ponteiro(int *num1, int *num2) // ele vai pega os numeros digitados e troca a ordem deles
{

    int pega;

    pega = *num1;
    *num1 = *num2;
    *num2 = pega;
}


int maiorNum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2, num3, resultado, escolha;
    do
    {
        printf("Menu de exercícios\n");
        printf("Escolha uma das opções abaixo:\n");
        printf("0. Sair\n");
        printf("1. Soma de dois números\n");
        printf("2. Subtração de dois números\n");
        printf("2. Subtração de dois números\n");
        printf("3. Média de três números\n");
        printf("4. Tabuada de um número\n");
        printf("5. Multiplicação de um número com parâmetro\n");
        printf("6. Mostrando o maior de dois números com parâmetro\n");
        printf("7. Trocando o posicionamento de dois números\n");
        scanf("%d", &escolha);
        switch(escolha)
        {
            case 0:
                printf("Você escolheu sair, até mais!\n");
                return 0;
            break;
            case 1:
                printf("Você escolheu a soma de dois números!\n\n");
                printf("Informe o primeiro número:\n");
                scanf("%d", &num1);
                printf("Informe o segundo número:\n");
                scanf("%d", &num2);
                resultado = num1 + num2;
                printf("O resultado dessa soma é: %d\n\n", resultado);
            break;
            case 2:
                printf("Você escolheu a subtração de dois números!\n\n");
                printf("Informe o primeiro número:\n");
                scanf("%d", &num1);
                printf("Informe o segundo número:\n");
                scanf("%d", &num2);
                resultado = num1 - num2;
                printf("O resultado dessa subtração é: %d\n\n", resultado);
            break;
            case 3:
                printf("Você escolheu a média de três números!\n\n");
                printf("Informe o primeiro número:\n");
                scanf("%d", &num1);
                printf("Informe o segundo número:\n");
                scanf("%d", &num2);
                printf("Informe o terceiro número:\n");
                scanf("%d", &num3);
                resultado = (num1 + num2 + num3)/3;
                printf("O resultado da média desses números são: %d\n\n", resultado);
            break;
            case 4:
                printf("Você escolheu a tabuada de um número!\n\n");
                printf("Informe um numero:\n");
                scanf("%d", &num1);
                for (int i = 1; i <= 10; i++) 
                {
                    printf("%d x %d = %d\n", num1, i, num1 * i);
            
                }
            break;
            case 5:
                printf("Você escolheu a multiplicação de um número com parâmetro!\n\n");
                printf("Informe um numero:\n");
                scanf("%d", &num1);
                resultado = dobro(num1);
                printf("O dobro desse número é: %d\n", resultado);
            break;
            case 6:
                printf("Você escolheu a exibição do maior entre dois números!\n\n");
                printf("Informe o primeiro número:\n");
                scanf("%d", &num1);
                printf("Informe o segundo número:\n");
                scanf("%d", &num2);
                resultado = maiorNum(num1, num2);
                printf("O maior número é o: %d\n", resultado);
            break;
            case 7:
                printf("Você escolheu a troca de posicionamento de dois números!\n\n");
                printf("Informe o primeiro número:\n");
                scanf("%d", &num1);
                printf("Informe o segundo número:\n");
                scanf("%d", &num2);
                printf("Antes: primeiro número = %d, segundo número = %d\n", num1, num2);
                ponteiro(&num1, &num2);
                printf("Depois: primeiro número = %d, segundo número = %d\n", num1, num2);
            break;
            default: 
            printf("Digite uma opção válida!\n");
        }
    }
    while(escolha =! 0);
}