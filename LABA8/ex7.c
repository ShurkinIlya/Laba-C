#include <stdio.h>
int power_of_number(int x, int n)
{
    if(n != 1){
        return x*power_of_number(x, n-1);
    }
    else{
        return x;
    }
}

int main()
{
    int number, power;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a power of number: ");
    scanf("%d", &power);
    printf("\n");

    printf("%d - result of rising number '%d' to power '%d'", power_of_number(number, power), number, power);

    return 0;
}