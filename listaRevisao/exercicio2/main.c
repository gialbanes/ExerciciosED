#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, maiorH, menorH;

    printf("Digite uma altura:");
    scanf("%d", &h);
    maiorH = h;
    menorH = h;

    for(int i=0; i<=7; i++){
        printf("Digite a altura de 8 pessoas:");
        scanf("%d", &h);
        if(h > maiorH){
            maiorH = h;
        } else if (h < menorH){
            menorH = h;
        }
    }
    printf("A maior altura é %d \n", maiorH);
    printf("A menor altura é %d \n", menorH);
    return 0;
}
