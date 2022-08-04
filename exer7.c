#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[]){

    int valor, maior, menor;

    maior = 0;
    menor = INT_MAX;
    

    for (int i = 0; i < 10; i++){
        scanf("%i", &valor);
        if (valor > maior){
            maior = valor;
        }
        if(valor < menor){
            menor = valor;
        }
        
    }

    printf("MAIOR: %i\nMENOR: %i\n", maior, menor);
    
    return 0;
}
