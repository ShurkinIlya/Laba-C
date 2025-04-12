#include <stdio.h>
#include <stdlib.h>
int hanoi_towers(int towerA[], int h)
{
    int towerB[h], towerC[h];

    towerC[h-1] = towerA[0];
    towerB[h-1] = towerA[1];
    towerC[h-2] = towerB[h-1];
    towerB[h-1] = towerA[2];
    towerA[2] = towerC[h-2];
    towerB[h-2] = towerC[h-1];
    towerB[h-3] = towerA[2];

    if(h > 3){
        
    }
}

int main()
{
    int height;
    printf("Enter a disks' number of tower: ");
    scanf("%d", &height);

    int *towerA;
    towerA = (int*) malloc(height * sizeof(int));
    for(int i=1; i<height+1; ++i){
        towerA[i] = i;
        printf("%d ", towerA[i]);
    }

    free(towerA);
    return 0;
}