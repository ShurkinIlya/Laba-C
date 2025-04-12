#include <stdio.h>

enum ServiceRating{
    POOR = 1,
    AVERAGE,
    GOOD,
    EXCELLENT
};

int main()
{
    int x;
    printf("Please, rate the service to 1 from 4:\n");
    scanf("%d", &x);

    switch(x){
        case POOR:
            printf("POOR");
            break;
        case AVERAGE:
            printf("AVERAGE");
            break;
        case GOOD:
            printf("GOOD");
            break;
        case EXCELLENT:
            printf("EXCELLENT");
            break;
    }

    return 0;
}