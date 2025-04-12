#include <stdio.h>
int main()
{
    float a;
    printf("Write amount of cups:\n");
    scanf("%f", &a);
    printf("Volume in pinta: %.2f\n", a/2);
    printf("Volume in unzia: %.2f\n", a*8);
    printf("Volume in tablespoon: %.2f\n", a*8*2);
    printf("Volume in teaspoon: %.2f\n", a*8*2*3);

    return 0;
}