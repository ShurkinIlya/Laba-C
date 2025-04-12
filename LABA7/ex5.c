#include <stdio.h>
int filter(int number)
{
    int mean=0;
    for(int i=1; i!=number+1; ++i){
        if(number%i==0){
            mean+=1;
        }
    }
    if(mean==2){
        return 1;
    }
    else{
        return 0;
    } 
}

int delete_number(int *arr, int size, int (*filter)(int))
{
    int newsize=size;
    for(int i=0; i<size; ++i){
        int x=filter(arr[i]);
        if(x==1){
            for(int j=i; j<newsize-1; ++j){
                arr[j]=arr[j+1];
            }
            newsize-=1;
        }
    }

    return newsize;
}

int main()
{
    int arr[1001];
    int n=1001;
    printf("Original massiv:\n");
    for(int i=0; i<n; ++i){
        arr[i]=i;
        printf("%d ", arr[i]);
    }

    n=delete_number(arr, n, filter);

    printf("\n\n");
    printf("New massiv:\n");
    for(int i=0; i<n; ++i){
        printf("%d ", arr[i]);
    }

    return 0;
}