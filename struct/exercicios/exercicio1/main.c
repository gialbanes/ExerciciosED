#include <stdio.h>
#include <stdlib.h>
# include <locale.h>

struct Livro{
    char titulo[100];
    int anoEdicao;
    int numPaginas;
    float preco;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Livro livros[5];
    int paginasTotais = 0;
    for(int i=0; i<5; i++){
        printf("Digite o t�tulo do livro:\n");
        scanf("%s", livros[i].titulo);

        printf("Digite o ano de edi��o do livro:\n");
        scanf("%d", &livros[i].anoEdicao);

        printf("Digite o n�mero de p�ginas do livro:\n");
        scanf("%d", &livros[i].numPaginas);
        paginasTotais += livros[i].numPaginas;

        printf("Digite o pre�o do livro:\n");
        scanf("%f", &livros[i].preco);
    }

    int tam = sizeof(livros)/sizeof(struct Livro);
    float media = paginasTotais/tam;

    printf("\n\n\n");
    printf("LIVROS\n");
    for(int i=0; i<5; i++){
        printf("T�tulo: %s \n", livros[i].titulo);
        printf("Ano de edi��o: %d \n", livros[i].anoEdicao);
        printf("N�mero de p�ginas: %d \n", livros[i].numPaginas);
        printf("Pre�o: %.2f \n", livros[i].preco);
        printf("\n\n\n\n");
    }

    printf("\n\n\n");
    printf("A m�dia do n�mero de p�ginas totais �: %.2f\n", media);
    return 0;
}
