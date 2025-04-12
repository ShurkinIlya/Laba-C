#include <stdio.h>
int sum(int num)
{
    if(num < 10){
        return num % 10;
    }
    else{
        return (num % 10) + sum(num/10);
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d - figures' amount of number %d", sum(number), number);
    return 0;
}