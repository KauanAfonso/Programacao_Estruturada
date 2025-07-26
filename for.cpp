#include <stdio.h>
#include <locale.h>


int main(){

    for(int x = 0; x<= 100; x++){
        if(x % 2 == 0){
            printf("O número %i é par\n", x);
        }
    }


    return 0;
}