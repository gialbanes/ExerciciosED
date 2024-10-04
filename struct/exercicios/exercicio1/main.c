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
        // pegue o buffer do teclado e limpe, se exitir algum valor ainda armazenado lá, ele limpa e está pronto pra receber novos dados, usamos aqui pq a linguagem C tem dificuldade em ler uma string e logo em seguida outro tipo
        fflush(stdin);
        printf("Digite o título do livro:\n");
        scanf("%s", livros[i].titulo);

        printf("Digite o ano de edição do livro:\n");
        scanf("%d", &livros[i].anoEdicao);

        printf("Digite o número de páginas do livro:\n");
        scanf("%d", &livros[i].numPaginas);
        paginasTotais += livros[i].numPaginas;

        printf("Digite o preço do livro:\n");
        scanf("%f", &livros[i].preco);
    }

    //apesar das variáveis serem interas, forçamos para que o programa entenda elas como float
    float media = (float)paginasTotais/5;

    printf("\n\n\n");
    printf("LIVROS\n");
    for(int i=0; i<5; i++){
        printf("Título: %s \n", livros[i].titulo);
        printf("Ano de edição: %d \n", livros[i].anoEdicao);
        printf("Número de páginas: %d \n", livros[i].numPaginas);
        printf("Preço: %.2f \n", livros[i].preco);
        printf("\n\n\n\n");
    }

    printf("\n\n\n");
    printf("A média do número de páginas totais é: %.2f\n", media);
    return 0;
}
