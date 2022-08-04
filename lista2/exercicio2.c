// Criar programa simule uma calculadora, com operações de soma, subtração,
// multiplicação, divisão, exponenciação e radiciação.

#include <stdio.h>
#include <math.h>



float funcaoSoma(){
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    return a+b;
}

float funcaoSubtracao(){
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    return a-b;
}


float funcaoMult(){
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    return a*b;
}


float funcaoDiv(){ 
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    return a/b;
}


float funcaoExp(){
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    return pow(a, b);
}

float funcaoRadiciacao(){
    float a;

    scanf("%f", &a);

    return sqrt(a);
}


int main (int argc, char *argv[]) {

    int esc;

    printf("----- CALCULADORA SANT -----\n");
    printf("[1] Soma \n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n[5] Exponenciação\n[6] Radiciação\n");
    printf("Digite sua escolha: ");

    scanf("%i", &esc);

    switch (esc){
        case 1:
            printf("SOMA: %f\n", funcaoSoma());
            break;
        case 2:
            printf("SUBTRAÇÃO: %f\n", funcaoSubtracao());
            break;
        case 3:
            printf("MULTIPLICAÇÃO: %f\n", funcaoMult());
            break;
        case 4:
            printf("DIVISÃO: %f\n", funcaoDiv());
            break;
        case 5:
            printf("EXPONENCIAÇÃO: %f\n", funcaoExp());
            break;
        case 6:
            printf("RADICIAÇÃO: %f\n", funcaoRadiciacao());
            break;

        default:
            break;
        }


    return 0;
}







/* pra testar no uri
    criar um arquivo chamado entrada.txt
    colocar as entradas do uri no arquivo
    criar um arquivo o mesmo nome da questao
    
    criar o codigo em si


    para o arquivo executavel pegar o de entrada, no linux
    basta fazer apenas: 

    ./entrada < entrada.txt
*/

