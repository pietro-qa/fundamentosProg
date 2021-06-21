#include<stdio.h>

    int secondsRest(int seconds){
        int result;
        result = seconds%60;
        return result;
    }

    int secondsToMinutes(int seconds){
        int result;
        result = seconds%60;
        return result;
    }

    int minutesToHour(int minutes){
        int result;
        result = minutes%60;
        return result;
    }

    int hourToDay(int hour){
        int result;
        result = hour/24;
        return result;
    }

    int main(){
    int seconds;

    printf("Digite os segundos desejados: \n");
    scanf("%d", &seconds);

    int result;

    result = secondsRest(seconds);
    printf("Seconds = %d\n", result);
    
    result = secondsToMinutes(seconds);
    printf("Min = %d\n", result);   

    result = minutesToHour(result);
    printf("Hour = %d\n", result); 

    result = hourToDay(result); 
    printf("Day = %d\n", result);
 }