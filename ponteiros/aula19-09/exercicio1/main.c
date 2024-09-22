#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[100];
    int *p=vet;

    for(int i=0; i<100; i++){
        *p=0;
        p++;
    }

    p=vet;
    for(int i=1; i<=100; i++){
        *p=i;
        p++;
    }

    p=vet;
    for(int i=0; i<100; i++){
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
