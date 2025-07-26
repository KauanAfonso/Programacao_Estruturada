#include <stdio.h>
#include <locale.h>


int main(){

    int x = 0;

    while (x <= 100){
        if(x % 2 == 0){
            printf("O número %i é par\n", x);
        }
        x++;
    }
    return 0;
}