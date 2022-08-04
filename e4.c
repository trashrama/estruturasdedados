#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    float vSalario, porcentagem, nSalario;

    scanf("%f", &vSalario);
    scanf("%f", &porcentagem);
    porcentagem = porcentagem/100;

    nSalario = vSalario * (1+porcentagem);

    printf("Novo Salário: %.3f\n", nSalario);


    return 0;
}