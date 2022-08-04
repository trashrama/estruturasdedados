#include <stdio.h>

int main (int argc, char *argv[]) {

    float alturaJoao = 1.50, alturaMaria = 1.10;
    int contAnos = 0;

    do{

        printf("ANO %i: \n", contAnos);
        printf("Altura do João %.2f: \n", alturaJoao);
        printf("Altura da Maria %.2f: \n", alturaMaria);


        if(alturaMaria <= alturaJoao){
            alturaMaria += 0.03;
            alturaJoao += 0.02;

            contAnos++;
        }


    } while (alturaJoao > alturaMaria);
    

    return 0;
}