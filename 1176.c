#include <stdio.h>
#include <stdlib.h>


void printarVetor(int vet[], int N){
    for (int i = 0; i < N; i++){
        printf("%i\n", vet[i]);        
    }
    
}

int main (int argc, char *argv[]) {
 
    int T;
    scanf("%d", &T);

    if ( (T > 0) && (T < 60) ){

        int *vet = (int*) malloc(T * sizeof(int));
        int i;
        long long unsigned int *fibVet = (long long unsigned int*) malloc(T * sizeof(long long unsigned int));

        for (i = 0; i < T; i++){
            scanf("%d", &vet[i]);
        }
        
        fibVet[0] = 0;
        fibVet[1] = 1;        


        for (i = 2; i < 60; i++){
            fibVet[i] = fibVet[i-1] + fibVet[i-2];
        }


        for (i = 0; i < T; i++){
            printf("Fib (%d) = %I64lld\n", vet[i], fibVet[vet[i]]);
        }
        

    
}

// está incompleto
    



    return 0;
}
