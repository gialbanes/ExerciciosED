#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0;
    for(int i=1; i<=1000; i++){
        if(i%2!=0 && i%5==0){
            soma += i;
        }
    }
    printf("A soma dos numeros impares que sao multiplos de 5 e que se encontram no intervalo de 1 ate 1000 eh %d\n", soma);
    return 0;
}
