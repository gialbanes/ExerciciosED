#include <stdio.h>
#include <stdlib.h>
# include <locale.h>

struct Habitante {
    int idade;
    char sexo[1];
    float salario;
    int numFilhos;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Habitante h[500];
    float salarioTotal=0;
    for(int i=0; i<500; i++){
        printf("Digite a idade do habitante:");
        scanf("%d", &h[i].idade);

        printf("Digite o sexo do habitante:");
        scanf("%s", &h[i].sexo);

        printf("Digite o salário do habitante:");
        scanf("%f", &h[i].salario);
        salarioTotal += h[i].salario;

        printf("Digite o número de filhos do habitante:");
        scanf("%d", &h[i].numFilhos);

        printf("\n\n");
    }

    float media = (float)salarioTotal/500;

    printf("\n\n");
    printf("RESULTADOS DA PESQUISA\n");
    for(int i=0; i<500; i++){
        printf("Idade: %d\n", h[i].idade);
        printf("Sexo: %s\n", h[i].sexo);
        printf("Salário: %.2f\n", h[i].salario);
        printf("Número de filhos: %d\n", h[i].numFilhos);
        printf("\n\n");
    }
    printf("A média do salário dos habitantes é: %.2f\n", media);
    return 0;
}
