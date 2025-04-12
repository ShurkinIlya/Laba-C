#include <stdio.h>
#include "function.h"

int main()
{
    int a, b;
    printf("Write first number: ");
    scanf("%d", &a);
    printf("Write second number: ");
    scanf("%d", &b);

    int n=sum(a, b);
    printf("Amount of numbers: %d", n);

    getchar();
    getchar();

    return 0;
}