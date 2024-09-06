#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    //DECLARAR O VETOR COM 10 POSIÇÕES
    int vet[TAM], i;

    //ACESSAR TODAS AS POSIÇÕES DO VETOR
    for(i=0; i<TAM; i++){
        //SOLICITAR DADOS AO USUÁRIO
        printf("Informe o valor:");
        scanf("%d", &vet[i]);
    }

    //IMPRIMIR TODOS OS VALORES DO VETOR
    for(i=0; i<TAM; i++){
        printf("%d", vet[i]);
    }

     //IMPRIMIR TODOS OS VALORES PARES DO VETOR
    for(i=0; i<TAM; i++){
        if(vet[i] % 2 == 0){
            printf("%d", vet[i]);
        }
    }

     //IMPRIMIR TODOS OS VALORES ÍMPARES DO VETOR
    for(i=0; i<TAM; i++){
        if(vet[i] % 2 != 0){
            printf("%d", vet[i]);
        }
    }
    return 0;
}
