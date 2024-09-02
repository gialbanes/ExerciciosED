#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[15], maior=0, posicao=0;

    printf("Digite os numeros: \n");

    for(int i=0; i<15; i++){
        printf("Numero:");
        scanf("%d", &a[i]);
    }

    for(int i=0; i<15; i++){
        if(a[i] > maior){
            maior = a[i];
            posicao = i;
        }
    }
    printf("O maior elemento eh %d e se encontra na posicao %d \n", maior, posicao);
    return 0;
}
