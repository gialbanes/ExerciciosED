#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, i=1, soma=0, qtdValores=0, qtdPos=0, qtdNeg=0;
    float media, perPos, perNeg;

    while(i!=0){
        printf("Digite um valor qualquer:");
        scanf("%d", &valor);

        if(valor ==0){
            break;
        }

        soma += valor;

        if(valor>0){
            qtdPos++;
        } else if (valor<0){
            qtdNeg++;
        }
        i++;
    }
    qtdValores = i-1;

    media = soma / qtdValores;
    perPos = ((float)qtdPos / (float)qtdValores) * 100;
    perNeg = ((float)qtdNeg / (float)qtdValores) * 100;

    printf("A média é %f \n", media);
    printf("A quantidade de positivos é %d \n", qtdPos);
    printf("A quantidade de negativos é %d \n", qtdNeg);
    printf("O percentual de positivos é %.2f%% \n", perPos);
    printf("O percentual de negativos é %.2f%% \n", perNeg);

    return 0;
}
