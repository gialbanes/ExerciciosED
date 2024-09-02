#include <stdio.h>
#include <stdlib.h>

int funcao(int vetor[5], int numero){
    int i, qtd=0;

    for(i=0; i<5; i++){
        if(numero == vetor[i]){
            qtd++;
        }
    }
    return qtd;
}

int main()
{
    int i, vetor[5], numero;

    printf("Digite o n numero a ser contado:\n");
    scanf("%d", &numero);

    for(i=0; i<5; i++){
        printf("Digite os elementos do vetor\n");
        scanf("%d", &vetor[i]);
    }
    int contagem = funcao(vetor, numero);
    printf("O numero eh %d e ele aparece %d vez(s) no vetor. \n", numero, contagem);
}
