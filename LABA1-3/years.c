#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("How old are you:\n");
    scanf("%d", &a);
    printf("You were born %.1f seconds ago", a*3.156*pow(10, 7));

    return 0;
}