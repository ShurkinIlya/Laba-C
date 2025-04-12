#include <stdio.h>
int main()
{
    printf("Matrix:\n");
    int matrix[20][20];
    for(int i=0; i<20; ++i){
        for(int j=0; j<20; ++j){
            if(i==j || i+j==19){
                matrix[i][j]=1;
            }
            else{
                matrix[i][j]=0;
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}