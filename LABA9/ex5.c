#include <stdio.h>

typedef struct{
    int hours;
    int minutes;
    int seconds;
} Time;

void printTime(Time time)
{
   printf("Your time is %d : %d : %d", time.hours, time.minutes, time.seconds); 
}

int main()
{
    Time time;
    printf("Enter hours: ");
    scanf("%d", &time.hours);
    printf("Enter minutes: ");
    scanf("%d", &time.minutes);
    printf("Enter seconds: ");
    scanf("%d", &time.seconds);

    printf("\n");
    printTime(time);

    return 0;
}