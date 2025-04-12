#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=10, M=20;

    printf("Matrix:\n");
    int matrix[N][M];
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            (matrix[i][j]=rand()%10);
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int a, n=0, sum=0, max1=INT_MIN;
    while(n<N){
        for(int i=0; i<N; ++i){
            for(int j=0; j<M; ++j){
                if(n!=i){
                    sum+=matrix[i][j];
                }
            }
        }
        if(sum>max1){
            max1=sum;
            a=n;
        }
        sum=0;
        ++n;
    }

    int b, max2=INT_MIN;
    while(n<M){
        for(int i=0; i<N; ++i){
            for(int j=0; j<M; ++j){
                if(n!=j){
                    sum+=matrix[i][j];
                }
            }
        }
        if(sum>max2){
            max2=sum;
            b=n;
        }
        sum=0;
        ++n;
    }

    int submatrix1[N-1][M], submatrix2[N][M-1];
    if(max1>max2){
        for(int i=0; i<N-1; ++i){
            for(int j=0; j<M; ++j){
                if(i<a){
                    submatrix1[i][j]=matrix[i][j];
                }
                else{
                    submatrix1[i][j]=matrix[i+1][j];
                }
            }
        }
        printf("Max submatrix:\n");
        for(int i=0; i<N-1; ++i){
            for(int j=0; j<M; ++j){
                printf("%d ", submatrix1[i][j]);
            }
            printf("\n");
        }
        printf("Deleted line: %d\n", a+1);
        printf("Submatrix's amount: %d\n", max1);
    }
    else{
        for(int i=0; i<N; ++i){
            for(int j=0; j<M-1; ++j){
                if(i<b){
                    submatrix2[i][j]=matrix[i][j];
                }
                else{
                    submatrix2[i][j]=matrix[i][j+1];
                }
            }
        }
        printf("Max submatrix:\n");
        for(int i=0; i<N; ++i){
            for(int j=0; j<M-1; ++j){
                printf("%d ", submatrix2[i][j]);
            }
            printf("\n");
        }
        printf("Deleted line: %d\n", b+1);
        printf("Submatrix's amount: %d\n", max2);
    }

    return 0;
}