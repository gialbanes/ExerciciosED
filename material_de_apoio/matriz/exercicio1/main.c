#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//A diagonal secundária de uma matriz quadrada N×N é composta pelos elementos cujas somas dos índices de linha e coluna são iguais a N−1

int main()
{
    int mat[TAM][TAM], vet[TAM];
    int l, c;

    for(l=0; l<TAM; l++){
        for(c=0; c<TAM; c++){
            if(l==c){
                mat[l][c] = 1;
            } else {
                mat[l][c] = 0;
            }
        }
    }

    printf("Matriz:\n");
    for(l=0; l<TAM; l++){
        for(c=0; c<TAM; c++){
            printf("%d", mat[l][c]);
        }
        printf("\n");
    }


    for(l = 0; l < TAM; l++){
        vet[l] = mat[l][TAM - l - 1];  // Acessa os elementos da diagonal secundária
    }

    printf("Diagonal secundaria:\n");
    for(l = 0; l < TAM; l++){
        printf("%d\n", vet[l]);  // Imprime os elementos da diagonal secundária armazenados no vetor
    }

    return 0;
}
