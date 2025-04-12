#include <stdio.h>
#include <string.h>
int main()
{
    char f[20], s[20];
    printf("Write your first name: ");
    scanf("%s", f);
    printf("Write your second name: ");
    scanf("%s", s);
    printf("%s %s\n", f, s);
    printf("%*d %*d", strlen(f), strlen(f), strlen(s), strlen(s));

    return 0;
}