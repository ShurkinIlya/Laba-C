#include <stdio.h>

int main()
{
    char *FilenameS = "source.txt";
    FILE *fp1 = fopen(FilenameS, "r");
    char *FilenameD = "destination.txt";
    FILE *fp2 = fopen(FilenameD, "w");
    char Buffer[256];
    while (fgets(Buffer, 256, fp1) != NULL)
    {
        fputs(Buffer, fp2);
        printf("Coppied succesfully");
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}