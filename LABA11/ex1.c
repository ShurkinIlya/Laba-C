#include <stdio.h>

int main()
{
    char string[200];
    printf("Enter a string:\n");
    scanf("%s", &string);
    char *Filename = "output.txt";
    FILE *fp = fopen(Filename, "w");
    if (fp)
    {
        fputs(string, fp);
        fclose(fp);
    }

    return 0;
}