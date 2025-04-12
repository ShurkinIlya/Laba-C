#include <stdio.h>
int figure(int num, int counter)
{
    if(num/10 >= 1){
        return figure(num/10, counter+1);
    }
    else{
        return counter;
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d figures in your number", figure(number, 1));

    return 0;
}