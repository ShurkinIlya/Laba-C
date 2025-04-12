#include <stdio.h>
int main()
{
    float a;
    printf("Write a number:\n");
    scanf("%f", &a);
    printf("%.1f\n", a);
    printf("%.1e\n", a);
}