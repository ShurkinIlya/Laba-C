#include <stdio.h>

enum TrafficLights{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    int colour;
    printf("Enter a number of colour: ");
    scanf("%d", &colour);
    switch(colour){
        case RED:
            printf("STOP");
            break;
        case YELLOW:
            printf("READY");
            break;
        case GREEN:
            printf("GO");
            break;
    }

    return 0;
}