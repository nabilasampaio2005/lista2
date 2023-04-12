
#include <stdio.h>

int main()
{

    int a, b, c;

    printf("digite 3 valores: ");

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("a é maior");

    else if (b > c)
        printf("b é maior");

    else
        printf("c é maior");
}