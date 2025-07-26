#include <stdio.h>
#include <locale.h>

//assinatura da função
int ParImpar(int x);

int main(){
    
   setlocale(LC_ALL, "Portuguese");

    int x, res;
    printf("Digite um valor para testarmos: \n");
    scanf_s("%i", &x);

    res = ParImpar(x);
    printf("O número %i é  %i ", x, res);

}

int ParImpar(int x){
    if(x % 2 == 0){
        return 1; // Par
    } else {
        return 0; // Ímpar
    }
}
