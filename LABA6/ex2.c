#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    printf("Write a number of strings: ");
    scanf("%d", &N);
    printf("Write a number of collons: ");
    scanf("%d", &M);

    int **arr;
    arr = (int**) malloc(N * sizeof(int*));
    for(int i=0; i<N; ++i){
        arr[i] = (int*) malloc(M * sizeof(int));
    }

    printf("Matrix %d x %d:\n", N, M);
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            arr[i][j] = rand()%10;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    free(arr);
    return 0;
}