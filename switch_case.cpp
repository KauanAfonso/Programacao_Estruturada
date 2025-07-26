#include <stdio.h>
#include <locale.h>

//Exercicio calculadora
int main(){

    int x,y;
    char op;

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf_s(" %c", &op);

    printf("Digite o primerio valor: ");
    scanf_s("%i", &x);

    printf("Digite o segundo valor: ");
    scanf_s("%i", &y);

    switch(op) {
        case '+':
            printf("Resultado: %i\n", x + y);
            break;
        case '-':
            printf("Resultado: %i\n", x - y);
            break;
        case '*':
            printf("Resultado: %i\n", x * y);
            break;
        case '/':
            if (y != 0) {
                printf("Resultado: %.2f\n", x / y);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
    }

    return 0;
}