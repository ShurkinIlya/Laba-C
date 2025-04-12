#include <stdio.h>
int main()
{
    float h, m;
    char name[20];
    printf("Write your height in sm: ");
    scanf("%f", &h);
    printf("Write your name: ");
    scanf("%s", &name);
    m = h/100;
    printf("%s, your height is %.2f m", name, m);
}