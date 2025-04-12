#include <stdio.h>
int main()
{
    int a=10, b=20, c;
    int *pta=&a, *ptb=&b, *ptc=&c;

    printf("a=%d (%p) b=%d (%p)\n", a, &a, b, &b);
    c = a;
    *pta = *ptb;
    *ptb = *ptc;
    printf("a=%d (%p) b=%d (%p)\n", a, &a, b, &b);

    return 0;
}