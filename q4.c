// Electricity bill calculator
#include <stdio.h>
int main(){
    float unit=0,bill=0;
    printf("Enter your Meter Reading ");
    scanf("%f",&unit);
    if(unit>0 && unit<=200){
        bill = bill + (unit*5.50);
    }
    if(unit>200 && unit<=400){
        bill = 700 + ((unit-200)*6.0);
    }
    if(unit>400 && unit<=600){
        bill = 1400 + ((unit-400)*7.50);
    }
    if(unit>600 ){
        bill = 1850 + ((unit-600)*9.0);
    }

    printf("%f\n",bill);
    return 0;
}