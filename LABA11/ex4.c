#include <stdio.h>

int main()
{
    int counter = 0;
    char *Filename = "text.txt";
    FILE *fp = fopen(Filename, "r");
    if (fp)
    {
        while (fscanf(fp, "%*s") != EOF)
        {
            ++counter;
        }
    }
    fclose(fp);
    printf("In this .txt file there are %d words.", counter);

    return 0;
}