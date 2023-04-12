#include <stdio.h>

int main()
{

    short idade;

    printf("Digite a idade: ");

    scanf("%hd", &idade);

    if (idade <= 4)
    {

        printf("idade invalida");
    }
    else if (idade < 8)
    {

        printf("infantil A\n");
    }
    else if (idade < 11)
    {

        printf("infantil B\n");
    }
    else if (idade < 14)
    {

        printf("juvenil A\n");
    }
    else if (idade < 18)
    {

        printf("juvenil B\n");
    }
    else
    {

        printf("Adulto\n");
    }
}