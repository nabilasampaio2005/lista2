#include <stdio.h>

int

main()

{

    int quantidade, codigo;

    float total = 0.0;

    printf("Código do Produto	Preço unitário \n"

           "1001			5,32\n"

           "1324			6,45 \n"

           "6548			2,37\n"

           "987			5,32\n"

           "7623			6,45\n"

    );

    printf("Digite o codigo: ");

    scanf("%d", &codigo);

    printf("Digite a quantidade: ");

    scanf("%d", &quantidade);

    if (codigo == 1001)

    {

        total = 5.32 * quantidade;
    }

    else if (codigo == 1324)

    {

        total = 6.45 * quantidade;
    }

    else if (codigo == 6548)

    {

        total = 2.37 * quantidade;
    }

    else if (codigo == 987)

    {

        total = 5.32 * quantidade;
    }

    else if (codigo == 7623)

    {

        total = 6.45 * (quantidade * 1.0);
    }

    printf("Foram pedido a quantidade %d do codigo %d e deu o total de R$%g",

           quantidade, codigo, total);
}