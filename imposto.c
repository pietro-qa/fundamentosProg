#include<stdio.h>

    int main (){
        float value, impostoTotal;
        scanf("%f", &value);

            if(value > 4000){
                impostoTotal = (value - 4000) * 0.275;
                value = 4000;
            };
            if (value <= 4000 && value >= 3500.76){
                impostoTotal = ((value - 3500.75) * 0.225 )+ impostoTotal;
                value = 3500.75; 
            };
            if (value <= 3500.75 && value >= 2300.51){
                impostoTotal = ((value - 2300.50) * 0.15 )+ impostoTotal; 
                value = 2300.50;
            };
            if (value <= 2300.50 && value >= 1200.26){
                impostoTotal = ((value - 1200.25) * 0.075 )+ impostoTotal; 
                printf("%.2f", impostoTotal);
            }else printf("0");
        
    }