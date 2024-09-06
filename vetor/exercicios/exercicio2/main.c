#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[5], vet2[5], soma=0, i;

    printf("Digite os valores do vetor 1\n");

    for(i=0; i<5; i++){
        printf("Infome o valor:");
        scanf("%d", &vet1[i]);
    }

    printf("Digite os valores do vetor 2\n");

    for(i=0; i<5; i++){
        printf("Infome o valor:");
        scanf("%d", &vet2[i]);
    }

    for(i=0; i<5; i++){
        soma = vet1[i] + vet2[i];
            printf("Soma: %d\n", soma);
    }

    return 0;
}
