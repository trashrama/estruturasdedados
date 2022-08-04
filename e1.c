#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int total = 0;

    for (int i = 0; i < 10; i++){
        int num;
        scanf("%i", &num);

        total += num;
    }
    
    printf("Média: %i\n", total/10);



    return 0;
}
