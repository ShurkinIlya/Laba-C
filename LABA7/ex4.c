#include <stdio.h>
#include <stdlib.h>
void function_1(){
    printf("Heater is turned on\n");
}
void function_2(){
    printf("Air conditioner is turned on\n");

}
void function_3(){
    printf("temperature is constant\n");
}
void function_4(){
    printf("System is turned off\n");
}

int main()
{
    printf("Please, Choose the climat-control's mode:\n");
    printf("Turn on the heater (1)\n");
    printf("Turn on the air conditioner (2)\n");
    printf("Keep on the current temperature (3)\n");
    printf("Turn off the system (4)\n");
    printf("\n");

    void (*arr[4])(void)={function_1, function_2, function_3, function_4};
    int act;
    do{
        printf("Enter: ");
        scanf(" %d", &act);
        switch(act){
            case 1:
                arr[act-1]();
                break;
            case 2:
                arr[act-1]();
                break;
            case 3:
                arr[act-1]();
                break;
            case 4:
                arr[act-1]();
                break;
        }
    }
    while(act != 4);
    
    return 0;
}