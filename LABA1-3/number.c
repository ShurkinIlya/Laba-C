#include <stdio.h>
int main()
{
    float a;
    printf("Write a number:\n");
    scanf("%f", &a);
    printf("%f %e %a", a, a, a);

    return 0;
}