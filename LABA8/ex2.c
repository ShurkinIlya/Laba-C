#include <stdio.h>
int fibonachi(int x, int a, int b)
{
    if(x > 2){
        return fibonachi(x-1, b, a+b);
    }
    else{
        return b;
    }
}

int main()
{   
    int x;
    printf("Write Fibonachi number's index:\n");
    scanf("%d", &x);

    printf("Fibonachi's number is %d", fibonachi(x, 1, 1));

    return 0;
}