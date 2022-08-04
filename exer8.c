#include <stdio.h>
#include <stdlib.h>

void calcularMedia(float n1, float n2);
void alunoAF(float media);
void alunoAprovado();
void alunoReprovado();


int main(int argc, char const *argv[]){
    
    float n1, n2;

    printf("Digite suas notas do semestre: ");
    scanf("%f %f", &n1, &n2);

    calcularMedia(n1, n2);

    return 0;
}

void calcularMedia(float n1, float n2){

    float media = (2*n1+3*n2)/5;

    printf("Sua média: %.2f\n", media);

    if (media >= 7){
        alunoAprovado();
    }else if ((media >= 3) && (media < 7)){
        alunoAF(media);
    }else{
        alunoReprovado();
    }
    
}
void alunoAF(float media){
    float af, mediaAF;
    printf("SITUAÇÃO FINAL: AVALIAÇÃO FINAL\n");

    printf("Digite o valor da AF: ");
    scanf("%f", &af);

    mediaAF = (media + af)/2;

    if (mediaAF >= 5){
        alunoAprovado();
    }else{
        alunoReprovado();
    }

}
void alunoAprovado(){
    printf("SITUAÇÃO FINAL: APROVADO\n");
}
void alunoReprovado(){
    printf("SITUAÇÃO FINAL: REPROVADO\n");
}

