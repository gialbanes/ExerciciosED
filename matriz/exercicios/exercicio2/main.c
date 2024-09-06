#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int mat[TAM][TAM], vet[1];
    int l, c;

    for(l=0; l<TAM; l++){
        for(c=0; c<TAM; c++){
            if(l == c){
                mat[l][c] =1;
            } else {
                mat[l][c] = 0;
            }
        }
    }

    for(l=0; l<TAM; l++){
        for(c=0; c<TAM; c++){
            if(l==c){
                vet[1] = mat[l][c];
                printf("%d ", vet[1]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
