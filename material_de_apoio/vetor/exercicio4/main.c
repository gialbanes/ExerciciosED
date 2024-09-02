#include <stdio.h>
#include <stdlib.h>

void separacao(int numPares[], int numImpares[], int n[]){
    for(int i=0; i<15; i++){
        if(n[i]%2==0){
            numPares[]++;
        } else if (n[i]%2!=0){
            numImpares[]++;
        }
    }
}
int main()
{
    int n[15], i, numPares[], numImpares[];

    for(i=0; i<15; i++){
        printf("Digite os elementos do vetor. Devem ser positivos.");
        scanf("%d", &n[i]);
    }

    separacao(numPares, numImpares);

    printf("%d\n", numPares);
    printf("%d\n", numImpares);
    return 0;
}
