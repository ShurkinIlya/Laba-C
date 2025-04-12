#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Write an amount of qwarts:\n");
    scanf("%d", &a);
    printf("amount: %e moleculs", a*95*pow(10, 24)/3);
}