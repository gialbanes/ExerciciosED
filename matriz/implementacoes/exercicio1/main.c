#include <stdio.h>
#include <stdlib.h>
#define TAML 4
#define TAMC 3

int main()
{
    //DECLARAR UMA MATRIZ E CONTADORES
    int mat[TAML][TAMC];
    int l, c, qtdPares=0;

    //PREENCHER TODAS AS POSIÇÕES COM O VALOR 0
    for(l=0; l<TAML; l++){ //CAMINHA PELAS LINHAS DA MATRIZ
        for(c=0; c<TAMC; c++){ //CAMINHA PELAS COLUNAS DA MATRIZ
            mat[l][c] == 0; //ATRIBUI 0 A LINHA L E COLUNA C
        }
    }

    //PREENCHER A MATRIZ COM DADOS INFORMADOS PELO USUÁRIO
    //PREENCHER TODAS AS POSIÇÕES COM O VALOR 0
    for(l=0; l<TAML; l++){ //CAMINHA PELAS LINHAS DA MATRIZ
        for(c=0; c<TAMC; c++){ //CAMINHA PELAS COLUNAS DA MATRIZ
            printf("\n Informe o valor:"); //SOLICITA O VALOR
            scanf("%d", &mat[l][c]); //ARMAZENA O VALOR
        }
    }

    //DESCOBRIR QUANTOS ELEMENTOS PARES EXISTE NA MATRIZ
    for(l=0; l<TAML; l++){ //CAMINHA PELAS LINHAS DA MATRIZ
        for(c=0; c<TAMC; c++){ //CAMINHA PELAS COLUNAS DA MATRIZ
            if(mat[l][c] % 2 == 0){ //VERIFICA VALORES PARES
                qtdPares++; //SOMA A QUANTIDADE DE PARES
            }
        }
    }
    printf("\n A quantidade de pares: %d", qtdPares);
    return 0;
}
