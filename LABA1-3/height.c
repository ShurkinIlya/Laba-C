#include <stdio.h>
int main()
{
    int a;
    printf("Write your height in inches:\n");
    scanf("%d", &a);
    printf("Your height: %.3f sm", a*2.54);

    return 0;

}