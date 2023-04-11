

#include <stdio.h>

int main()
{

    int i;

    float a, b, c, resultado[3];

    printf("digite 3 valores: ");

    scanf(" %g %g %g", &a, &b, &c);

    printf("digite a operação 1 crescente, 2 para decrescente e 3 para b maior: ");

    scanf("%d", &i);

    if (a > b && a > c)
    {

        resultado[0] = a;

        if (b > c)
        {

            resultado[1] = b;

            resultado[2] = c;
        }
        else
        {

            resultado[1] = c;

            resultado[2] = b;
        }
    }
    else if (b > a && b > c)
    {

        resultado[0] = b;

        if (a > c)
        {

            resultado[1] = a;

            resultado[2] = c;
        }
        else
        {

            resultado[1] = c;

            resultado[2] = a;
        }
    }
    else if (c > a && c > b)
    {

        resultado[0] = c;

        if (a > b)
        {

            resultado[1] = a;

            resultado[2] = b;
        }
        else
        {

            resultado[1] = b;

            resultado[2] = a;
        }
    }

    if (i == 1)
        printf("A ordem crescente é: %g %g %g", resultado[2], resultado[1], resultado[0]);

    else if (i == 2)
        printf("A ordem decrescente é: %g %g %g", resultado[0], resultado[1], resultado[2]);

    else if (i == 3)
        printf("A B é o maior é: %g %g %g", resultado[1], resultado[0], resultado[2]);
}