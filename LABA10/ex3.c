#include <stdio.h>
typedef union{
    float temperature;
    float humidity;
    float speedWind;

} measurement;

int main()
{
    printf("Measurement type:\n (1)temperature\n (2)humidity\n (3)speed of wind\n");
    printf("Enter number of your measurement type: ");
    int mm;
    scanf("%d", &mm);
    printf("\n");
    printf("Enter meaning of measurement: ");

    measurement meaning;
    switch(mm){
        case 1:
            scanf("%f", &meaning.temperature);
            printf("Temperature: %.2f", meaning.temperature);
            break;
        case 2:
            scanf("%f", &meaning.humidity);
            printf("Humidity: %.2f", meaning.humidity);
            break;
        case 3:
            scanf("%f", &meaning.speedWind);
            printf("Speed of wind: %.2f", meaning.speedWind);
            break;
    }

    return 0;
}