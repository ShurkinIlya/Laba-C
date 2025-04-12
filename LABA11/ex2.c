#include <stdio.h>

int main()
{
    int counter = 0;
    char *Filename = "input.txt";
    char Buffer[256];
    FILE *fp = fopen(Filename, "r");
    if (fp)
    {
        while (fgets(Buffer, 256, fp) != NULL)
        {
            ++counter;
        }
    }
    fclose(fp);
    printf("IN this .txt file there are %d rows.", counter);

    return 0;
}