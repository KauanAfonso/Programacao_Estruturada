#include <stdio.h>
#include <locale.h>

/*

char - caracter
int - inteiro
float - ponto flutuante
double - ponto flutuante de dupla precisão
void - vazio

*/


int main()
{
    
   setlocale(LC_ALL, "Portuguese");

    //operados de atribuição
    int a = 10;
    int b = 20;
    
    //incrementando o valor de a
    a++;

    //decrementando o valor de b
    b--;

    //printando
    printf("KAUANN\n");

    //exemplo 
    int x,y, res;

    //passando o valor de x para armazenar a entrada 
    printf("Digite um valor: \n");
    scanf_s("%i", &x);

    printf("Digite um segundo valor: \n");
    scanf_s("%i", &y);

    res = x + y;
    printf("O resultado da soma de %i com %i é: %i ", x,y, res);

    return 0;
}
