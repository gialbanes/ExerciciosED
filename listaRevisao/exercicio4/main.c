#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i=0, qtd025=0, qtd2650=0, qtd5175=0, qtd76100=0;
    printf("Digite uma quantidade desconhecidas de numeros. Digite um negativo para parar:\n");

    while(i>=0){
        printf("Numero:");
        scanf("%d", &num);

        if(num<0){
            break;
        }

        if(num>=0 && num<=25){
            qtd025++;
        } else if (num>=26 && num<=50){
            qtd2650++;
        } else if (num>=51 && num<=75){
            qtd5175++;
        } else if (num>=76 && num<=100){
            qtd76100++;
        }
    }
    printf("A quantidade de numeros entre 0 e 25 eh: %d \n", qtd025);
    printf("A quantidade de numeros entre 26 e 50 eh: %d \n", qtd2650);
    printf("A quantidade de numeros entre 51 e 75 eh: %d \n", qtd5175);
    printf("A quantidade de numeros entre 76 e 100 eh: %d \n", qtd76100);
    i++;
    return 0;
}
