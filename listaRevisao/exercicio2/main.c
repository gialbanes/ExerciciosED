#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, maiorH, menorH;

    printf("Digite uma altura inicial:");
    scanf("%d", &h);
    maiorH = h;
    menorH = h;

    for(int i=0; i<=7; i++){
        printf("Agora digite a altura de 8 pessoas:");
        scanf("%d", &h);
        if(h > maiorH){
            maiorH = h;
        } else if (h < menorH){
            menorH = h;
        }
    }
    printf("A maior altura eh %d \n", maiorH);
    printf("A menor altura eh %d \n", menorH);
    return 0;
}
