#include <stdio.h>
#include <stdlib.h>

void reverseString(char *str)
{
    int n = 0;
    while (str[n] != '0')
    {
        n++;
    }

    for (int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main()
{
    FILE *inputFile = fopen("input.txt", "r");

    char buffer[1000];
    size_t bytesRead = fread(buffer, sizeof(char), 1000 - 1, inputFile);
    buffer[bytesRead] = '0';

    fclose(inputFile);

    reverseString(buffer);

    FILE *outputFile = fopen("reversed.txt", "w");
    if (outputFile == NULL)
    {
        perror("Open error reversed.txt");
        return EXIT_FAILURE;
    }

    fwrite(buffer, sizeof(char), bytesRead, outputFile);
    fclose(outputFile);

    printf("Succesfully wrote\n");

    return 0;
}