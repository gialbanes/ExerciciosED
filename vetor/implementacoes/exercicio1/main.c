#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECLARAR O VETOR
    int numeros[10];
    int i, maior=0;

    //INSERIR OS 10 VALORES
    for(i=0; i<10; i++){
        printf("Informe o valor:");
        scanf("%d", &numeros[i]);
    }

    //ENCONTRAR O MAIOR VALOR; PERCORRENDO TODOS OS ÍNDICES
    for(i=0; i<10; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }
    printf("O maior elemento eh %d \n", maior);
    return 0;
}
