#include <stdio.h>
int main()
{
    char a[20], b[20];
    printf("Write your first and second name:\n");
    scanf("%s %s", &a, &b);
    printf("%s, %s\n", b, a);

    return 0;
}