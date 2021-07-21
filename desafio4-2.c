#include <stdio.h>

    int main(){
        int num, i, j;

        scanf("%d", &num);
        
        for(i=0; i<num; i++){

            for(j = i; j<num; j++)
                printf("%c ", j+65);

            printf("\n");
        }
    }