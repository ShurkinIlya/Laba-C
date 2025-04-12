#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[20];
    char author[20];
    int year;
    char status[3];
} BOOKS;

int searching(char a[], char b[]){
    int z = 0;
    for(int j=0; j<strlen(a); ++j){
        if(a[j] == b[j]){
            z++;
        }
    }
    if(z == strlen(a)){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter a number of books: ");
    scanf("%d", &num);

    BOOKS *book = (BOOKS*) malloc(num * sizeof(BOOKS));
    for(int x=0; x<num; ++x){
        printf("Enter name of %d book: ", x+1);
        scanf("%s", &book[x].name);
        printf("Enter author of %d book: ", x+1);
        scanf("%s", &book[x].author);
        printf("Enter public year of %d book: ", x+1);
        scanf("%d", &book[x].year);
        printf("Enter status of %d book: ", x+1);
        scanf("%s", &book[x].status);
        printf("\n");
    } 

    char search[20];
    printf("Enter name of interested book: ");
    scanf("%s", &search);
    printf("\n");

    for(int i=0; i<num; ++i){
        if(strcmp(search, book[i].name) == 0){
            printf("Information about book '%s':\n", search);
            printf("Name: %s\n", book[i].name);
            printf("Author: %s\n", book[i].author);
            printf("Public year: %d\n", book[i].year);
            printf("status: %s\n", book[i].status);
            break;
        }
    }

    free(book);
    return 0;
}