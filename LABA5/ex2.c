#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix[10][20];
    int sum=0, a=INT_MIN;

    printf("Matrix:\n");
    for(int i=0; i<10; ++i){
        for(int j=0; j<20; ++j){
            (matrix[i][j]=rand()%10);
            printf("%d ", matrix[i][j]);
                if(matrix[i][j]>a){
                    a=matrix[i][j];
                }
        }
        printf("\n");
        sum+=a;
    }
    printf("Max amount of strings: %d\n", sum);
    printf("\n");
    return 0;
}