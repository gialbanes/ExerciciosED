#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[100];
    int *p=vet;

    for(int i=0; i<100; i++){
        *(p+i) = 0;
    }

    p=vet;
    for(int i=1; i<=100; i++){
        *(p + i) = i + 1;
    }

    p=vet;
    for(int i=0; i<100; i++){
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
