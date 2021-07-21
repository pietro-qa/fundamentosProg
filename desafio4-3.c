#include <stdio.h>

    int main(){
        int num, i;

        scanf("%d", &num);
        
        for(num; num>0; num--){

            for(i = 0; i < num; i++)
                printf("%c ", num+64);

            printf("\n");
        }
    }