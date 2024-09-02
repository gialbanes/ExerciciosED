#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, i=1, soma=0, qtdValores=0, qtdPos=0, qtdNeg=0;
    double media, perPos, perNeg;

    printf("Digite numero nao determinado de valores. Digite 0 parar parar. \n");

    while(i!=0){
        printf("Valor:");
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

    media = (double)soma / qtdValores;
    perPos = ((double)qtdPos / (double)qtdValores) * 100;
    perNeg = ((double)qtdNeg / (double)qtdValores) * 100;

    printf("A media geral eh %.2lf \n", media);
    printf("A quantidade de positivos eh %d \n", qtdPos);
    printf("A quantidade de negativos eh %d \n", qtdNeg);
    printf("O percentual de positivos eh %.2lf%% \n", perPos);
    printf("O percentual de negativos eh %.2lf%% \n", perNeg);

    return 0;
}
