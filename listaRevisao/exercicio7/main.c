#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=0, resultado=1;
    printf("Digite um valor inicial:");
    scanf("%d", &n);
    printf("%d! = %d", n, n);

    for(i=n; i>1; i--){
        resultado*=i;
        printf(" X %d ", i-1);
    }
    printf("= %d", resultado);
    return 0;
}
