#include <stdio.h>
#include <stdlib.h>
int trans_matrix(int matrix[10][20], int tmatrix[20][10])
{
    for(int i=0; i<10; ++i){
        for(int j=0; j<20; ++j){
            tmatrix[j][i]=matrix[i][j];
        }
    }

    return tmatrix[20][10];
}

int main()
{
    int matrix[10][20], tmatrix[20][10];

    printf("Original matrix:\n");
    for(int i=0; i<10; ++i){
        for(int j=0; j<20; ++j){
            (matrix[i][j]=rand()%10);
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    trans_matrix(matrix, tmatrix);

    printf("Transponed matrix:\n");
    for(int i=0; i<20; ++i){
        for(int j=0; j<10; ++j){
            printf("%d ", tmatrix[i][j]);
        }
        printf("\n");
    }
   

    return 0;
}