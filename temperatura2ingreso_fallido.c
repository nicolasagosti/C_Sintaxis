#include <stdio.h> 
#include <stdlib.h>

int main(void){
    /*print a fahrenheit-celcius table for fahr = 0,20, .. 300
    celcius = ((farenheit-32)*5)/9
    */
   int celsius, fahr;
   int lower, upper, step;
    upper = 300;
    printf("ingresame el tope \n");
    scanf("%d",upper);
    lower = 0;
    step = 20;

    fahr = lower;
    while(fahr<=upper){
        celsius = (5*(fahr-32))/9;
        printf("%d \t %d \n", celsius, fahr);
        fahr += step;
    }
}