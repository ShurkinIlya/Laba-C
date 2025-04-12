#include <stdio.h>
#include <stdlib.h>
int amount_of_array(int arr[], int vol)
{
    if(vol != 0){
        return arr[vol] + amount_of_array(arr, --vol);
    }
    else{
        return arr[0];
    }
}

int main()
{
    int volume;
    printf("Enter a volume of array: ");
    scanf("%d", &volume);

    int *array;
    array = (int*) malloc(volume * sizeof(int));
    printf("Your massiv: ");
    for(int i=0; i<volume; ++i){
        array[i] = rand();
        printf("%d ", array[i]);
    }

    printf("\n");
    printf("%d - amount of your array", amount_of_array(array, volume));

    free(array);
    return 0;
}