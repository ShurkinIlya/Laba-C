#include <stdio.h>
#include <string.h>
int polidrom(char word[], size_t start, size_t end)
{
    if(word[start] == word[end]){
        if(start < end){
            return 1;
        }
        else{
            return polidrom(word, ++start, --end);
        }
    }
    else{
        return 0;
    }
    
}

int main()
{
    char word[10];
    printf("Enter your word: ");
    scanf("%s", &word);

    printf("Is your word polidrom?\n");
    int x = polidrom(word, 0, strlen(word)-1);
    if(x == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    

    return 0;
}