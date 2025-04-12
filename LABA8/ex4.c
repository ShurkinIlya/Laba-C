#include <stdio.h>
#include <string.h>
void string(char str[], size_t start, size_t end)
{
    if(start < end){
        char x;
        x = str[start];
        str[start] = str[end];
        str[end] = x;

        string(str, ++start, --end);
    }
    
}

int main()
{
    char str[100];
    printf("Enter a string:\n");
    scanf("%s", str);

    string(str, 0, strlen(str) - 1);
    printf("%s", str);

    return 0;
}