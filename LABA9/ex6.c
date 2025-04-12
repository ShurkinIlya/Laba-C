#include <stdio.h>

typedef struct{
    int (*amount)(int num1, int num2);
    int (*multiplication)(int num1, int num2);
} Operation;

int amount(int num1, int num2){
    return num1 + num2;
}
int multiplication(int num1, int num2){
    return num1 * num2;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    Operation operation;
    operation.amount = &amount;
    operation.multiplication = &multiplication;
    printf("Amount of your numbers: %d\n", operation.amount(num1, num2));
    printf("Multiplication of your numbers: %d\n", operation.multiplication(num1, num2));

    return 0;
}