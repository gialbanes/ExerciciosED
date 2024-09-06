#include <stdio.h>
#include <stdlib.h>


int main(){

    int  n[15], nPar[15], nImpar[15];

    for (int i = 0; i<15; i++){
        printf("Digite um numero positivo: ");
        scanf("%d", &n[i]);
    }

    for (int i = 0; i<15; i++) {
        if (n[i] % 2 == 0){
            nPar[i]++;
        }
        else{
            nPar[i]++;
        }
    }
    for(int i=0; i<nPar; i++){
        printf("%d\n", nPar[i]);
    }
}

