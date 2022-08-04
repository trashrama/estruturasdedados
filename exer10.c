#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    
    int idade = 1, total = 0, somaIdades = 0;

    while(idade != 0){
        scanf("%i", &idade);
        if(idade != 0){
            somaIdades += idade;
            total++;
        }
    }

    printf("MÉDIA DAS IDADES: %.2f\n", somaIdades/(float)total);

    return 0;
}