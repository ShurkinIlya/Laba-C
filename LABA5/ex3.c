#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix[10][20];
    int x=0, sum=0, max=INT_MIN, n;

    printf("Matrix:\n");
    for(int i=0; i<10; ++i){
        for(int j=0; j<20; ++j){
            (matrix[i][j]=-10 + rand()%20);
            printf("%d ", matrix[i][j]);
            sum+=matrix[i][j];
            if(matrix[i][j]>0){
                x+=1;
            }
        }
        printf("\n");
        if(x>1){
            if(sum>max){
                max = sum;
                n=i;
            }
        }
        sum=0;
    }

    printf("Line with the biggest amount: %d\n", max);
    printf("Numm of line: %d", n+1);

    return 0;
}