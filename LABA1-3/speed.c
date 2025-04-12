#include <stdio.h>
int main()
{
    float s, t, v;
    printf("Write a speed of loading(Mb/s): ");
    scanf("%f", &s);
    printf("Write a volume of loading(MB): ");
    scanf("%f", &v);
    t = 8*v/s;
    printf("If the speed of loading is %.2f Mb/s, then %.2f MB of file will be load in %.2f seconds", s, v, t);

    return 0;
}