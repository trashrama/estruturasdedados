#include <stdio.h>
#include <stdlib.h>

#define PI 3.14 


float areaQuadrado(float lado){
    return lado*lado;
}

float areaRetangulo(float base, float altura){
    return base*altura;
}

float areaTriangulo(float base, float altura){
    return (base*altura)/2;
}

float areaCirculo(float raio){
    return PI*(raio*raio);
}


int main (int argc, char *argv[]) {

    int escolha;
    float lado, base, alt, raio;

    printf("[1] Quadrado\n[2] Retângulo\n[3] Triângulo\n[4] Circunferência");
    printf("\nQual figura geometrica deseja saber a área?\n");

    scanf("%i", &escolha);

    switch (escolha){
    case 1:
        printf("Digite o valor (cm) do lado: ");
        scanf("%f", &lado);
        printf("Área do Quadrado: %f cm²\n", areaQuadrado(lado));  

        break;
    case 2:
        printf("Digite o valor (cm) da base: ");
        scanf("%f", &base);
        printf("Digite o valor (cm)  da altura: ");
        scanf("%f", &alt);
        printf("Área do Retângulo: %f cm²\n", areaRetangulo(base, alt));    

        break;
    case 3:
        printf("Digite o valor (cm) da base: ");
        scanf("%f", &base);
        printf("Digite o valor (cm) da altura: ");
        scanf("%f", &alt);
        printf("Área do Triângulo: %f cm²\n", areaTriangulo(base, alt));    

        break;

     case 4:
        printf("Digite o valor (cm) do raio: ");
        scanf("%f", &raio);
        printf("Área do Circunferência: %f cm²\n", areaCirculo(raio));    
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }


    return 0;
}