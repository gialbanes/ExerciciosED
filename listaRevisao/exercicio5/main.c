#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i=1, qtdPares=0, qtdImp=0, somaPares=0, somaGeral=0, qtdGeral=0;
    float mediaPares=0.0, mediaGeral=0.0;
    printf("Digite uma quantidade nao determinada de numeros positivos. Digite 0 para parar \n");

    while(i>0){
        printf("Numero:");
        scanf("%d", &num);

        if(num==0){
            break;
        }

        if(num%2==0){
            qtdPares++;
            somaPares+=num;
        } else if (num%2!=0){
            qtdImp++;
        }
        somaGeral+=num;
        qtdGeral++;
    }

    mediaGeral = (float)somaGeral / qtdGeral;
    mediaPares = (float)somaPares / qtdPares;

    printf("A quantidade de numeros pares eh %d \n", qtdPares);
    printf("A quantidade de numeros impares eh %d \n", qtdImp);
    printf("A media dos numeros pares eh %.2f \n", mediaPares);
    printf("A media geral eh %.2f \n", mediaGeral);
            i++;
    return 0;
}
