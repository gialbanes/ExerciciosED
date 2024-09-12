#include <stdio.h>
#include <stdlib.h>
#define tamL 7
#define tamC 5

int main()
{
    int mat[tamL][tamC];
    int l, c;
    int valor=1, soma=0;

    for(l=0; l<tamL; l++){
        for(c=0; c<tamC; c++){
            mat[l][c] = valor++;
        }
    }
    printf("Matriz:\n\n");
    for(l=0; l<tamL; l++){
        for(c=0; c<tamC; c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }
    printf("\n\n\n");


    printf("Somatoria das linhas:\n\n");
    l=0;
    while(l<tamL){
        c=0;
        while(c<tamC){
            soma += mat[l][c];
            c++;
        }
        printf("Soma da linha %d: %d\n", l + 1, soma);
        l++;
    }
    return 0;
}
