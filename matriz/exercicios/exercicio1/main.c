#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main()
{
    int mat[TAM][TAM];
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
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
    return 0;
}
