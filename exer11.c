#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int num;

    scanf("%i", &num);

    if(num > 999){
        printf("Casa dos Milhares\n");
    }else if(num > 99){
        printf("Casa das Centenas\n");
    }else if(num > 9){
        printf("Casa das Dezenas\n");
    }else if(num > 0){
        printf("Casa das Unidades\n");
    }else{
        printf("Casa não definida\n");
    }
    

    return 0;
}