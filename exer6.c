#include <stdio.h>
#include <stdlib.h>

float celsiusPara(int esc, float valor){

    switch (esc){
    case 1:
        printf("%.2f ºK", valor + 273,15);
        break;
    case 2:
        printf("%.2f ºF", (valor * 9/5) + 32 );
        break;
    default:
        break;
    }

}

void apresentarMenu(){
    int esc;
    float valor;

    printf("Digite o valor em ºC: ");
    scanf("%f", &valor);

    printf("------ CONVERSÃO ------\n");
    printf("[1] Celsius para Kelvin\n");
    printf("[2] Celsius para Fahrenheit\n");

    scanf("%i", &esc);
    celsiusPara(esc, valor);


}

int main(int argc, char const *argv[]){
    
    apresentarMenu();

    return 0;
}
