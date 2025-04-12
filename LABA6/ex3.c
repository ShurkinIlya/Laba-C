#include <stdio.h>
#include <stdlib.h>

int main()
{
    int str1, col1, str2, col2;
    printf("Write sizes of first matrix:\n");
    scanf("%d", &str1);
    scanf("%d", &col1);
    printf("\n");
    printf("Write sizes of second matrix:\n");
    scanf("%d", &str2);
    scanf("%d", &col2);

    int **arr1;
    arr1 = (int**) malloc(str1 * sizeof(int*));
    for(int i=0; i<str1; ++i){
        arr1[i] = (int*) malloc(col1 * sizeof(int));
    }
    int **arr2;
    arr2 = (int**) malloc(str2 * sizeof(int*));
    for(int i=0; i<str2; ++i){
        arr2[i] = (int*) malloc(col2 * sizeof(int));
    }
    int str, col, **arr;
    str = str1;
    col = col2;
    arr = (int**) malloc(str * sizeof(int*));
    for(int i=0; i<str; ++i){
        arr[i] = (int*) malloc(col * sizeof(int));
    }

    printf("First matrix:\n");
    for(int i=0; i<str1; ++i){
        for(int j=0; j<col1; ++j){
            arr1[i][j] = rand()%10;
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix:\n");
    for(int i=0; i<str2; ++i){
        for(int j=0; j<col2; ++j){
            arr2[i][j] = rand()%10;
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    int x=0;
    if(str2 != col1){
        printf("Multiplication of matrixes is impossible!");
    }
    else{
        for(int i=0; i<str1; ++i){
            for(int j=0; j<col2; ++j){
                for(int a=0; a<col1; ++a){
                    x += arr1[i][a]*arr2[a][j];
                }
                arr[i][j] = x;
                x=0;
            }
        }
        printf("New matrix:\n");
        for(int i=0; i<str; ++i){
            for(int j=0; j<col; ++j){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    free(arr1);
    free(arr2);
    free(arr);
    return 0;
}