#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_len_name 20 

int main()
{
    int cand;
    printf("Welcome to vote!\n");
    printf("Enter a number of candidates: ");
    scanf("%d", &cand);
    
    char **names;
    names = (char**) malloc(cand * sizeof(char*));
    printf("Enter names of candidates:\n");

    for(int i=0; i<cand; ++i){
        names[i] = (char*) malloc(max_len_name * sizeof(char));
    }

    char name[max_len_name];
    for(int i=0; i<cand; ++i){
        scanf("%s", &name);
        memcpy(names[i], name, max_len_name * sizeof(char));
    }

    printf("List of candidates:\n");
    for(int i=0; i<cand; ++i){
        printf("%d) %s\n", i+1, names[i]);
    }

    int v=0, *vote;
    vote = (int*) calloc(cand, sizeof(int));
    do{
        printf("Write a number of your candidate: ");
        scanf("%d", &v);
        if(v > cand || v < 0){
            printf("Vote is over!");
            break;
        }
        else{
            vote[v-1]++;
            for(int i=0; i<cand; ++i){
                printf("%d) %s. votes(%d)\n", i+1, names[i], vote[i]);
            }
            printf("\n");
        }
    }
    while(v > 0);

    free(names);
    free(vote);
    return 0;
}