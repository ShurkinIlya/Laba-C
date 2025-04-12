#include <stdio.h>

enum DAYS{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    int day;
    printf("Enter a number of day: ");
    scanf("%d", &day);
    switch(day){
        case MONDAY:
            printf("MONDAY");
            break;
        case TUESDAY:
            printf("TUESDAY");
            break;
        case WEDNESDAY:
            printf("WEDNESDAY");
            break;
        case THURSDAY:
            printf("THURSDAY");
            break;
        case FRIDAY:
            printf("FRIDAY");
            break;
        case SATURDAY:
            printf("SATURDAY");
            break;
        case SUNDAY:
            printf("SUNDAY");
            break;
    }

    if(day == 6 || day == 7){
        printf(" - weekend");
    }
    else{
        printf(" - weekday");
    }

    return 0;
}