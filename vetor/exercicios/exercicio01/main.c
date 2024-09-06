#include <stdio.h>
#include <stdlib.h>

int main()
{
    double notas[4], media=0.0, soma=0;
    int i;

    for(i=0; i<4; i++){
        printf("Informe a nota:");
        scanf("%lf", &notas[i]);
        soma+=notas[i];
    }

    media = soma / 4;

    printf("A media das 4 notas: %lf\n", media);
    return 0;
}

