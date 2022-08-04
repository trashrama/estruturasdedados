#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int valor, cont = 0;
    int multTres[10];

    for (int i = 0; i < 10; i++){
        scanf("%i", &valor);
        if (valor % 3 == 0){
            multTres[cont] = valor;
            cont++;
        }
    }

    printf("----- Múltiplos de 3: -----\n");
    for (int i = 0; i < cont; i++){
        printf("[%i] %i\n", i+1, multTres[i]);

    }
    
    




    return 0;
}
