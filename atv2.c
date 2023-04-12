
#include <stdio.h>

#include <stdlib.h>

int main()

{

    int a, b;

    printf("Digite dois valores: ");

    scanf("%d %d", &a, &b);

    div_t resultado = div(a, b);

    if (resultado.rem == 0)
    {

        printf("São múltiplos");
    }
    else
    {

        printf("Não são múltiplos");
    }
}