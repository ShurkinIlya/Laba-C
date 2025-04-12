#include <stdio.h>

typedef struct{
    float x;
    float y;
} point;

int main()
{
    point po;
    printf("Enter first coordinate: ");
    scanf("%f", &po.x);
    printf("Enter second coordinate: ");
    scanf("%f", &po.y);

    printf("point(%.2f : %.2f)", po.x, po.y);

    return 0;
}