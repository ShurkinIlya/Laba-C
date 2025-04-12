#include "backArray.h"
void back_array(int arr[10], int n)
{
    int c;
    for(int i=0, j=n-1; i<n/2; ++i, --j){
        c=arr[j];
        arr[j]=arr[i];
        arr[i]=c;
   }
}