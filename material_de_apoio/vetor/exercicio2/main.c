#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f[20];

    printf("Digite 20 numeros: \n");
    for(int i=0; i<20; i++){
        printf("Numero:");
        scanf("%d", &f[i]);
    }
    for(int i=0; i<20; i++){
        f[i]*=i;
    }
    for(int i=0; i<20; i++){
        printf("Resultado: %d \n", f[i]);
    }
    return 0;
}
