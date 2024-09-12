#include <stdio.h>
#include <stdlib.h>
#define tamL 7
#define tamC 5

int main()
{
    int b[tamL][tamC];
    int l, c, maior, valor=1, posL, posC;


    for(l=0; l<tamL; l++){
        for(c=0; c<tamC; c++){
            b[l][c] = valor++;
        }
    }

    printf("Matriz:\n\n");
    for(l=0; l<tamL; l++){
        for(c=0; c<tamC; c++){
            printf("%2d ", b[l][c]);
        }
        printf("\n");
    }
    printf("\n");

    maior = b[0][0];
    posL = 0;
    posC = 0;
    printf("\n\n\n");
    for(l=0; l<tamL; l++){
        for(c=0; c<tamC; c++){
            if(b[l][c] > maior){
                maior = b[l][c];
                posL = l;
                posC = c;
            }
        }
    }
    printf("O maior elemento e %d e esta na linha %d e coluna %d", maior, posL, posC);
    printf("\n");
    return 0;
}
