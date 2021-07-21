#include<stdio.h>

    int main (){
        int num, counter, numAnt, higherSequence;

        printf("Digite um n:\n");
        scanf("%d", &num);

        counter = 0, higherSequence = 0;
        while(num>=0){
            
            if(num > numAnt ){
                counter++;
                if(counter > higherSequence)
                    higherSequence = counter;
            }
            else counter = 1;

            numAnt = num;
            printf("Digite um n:\n");
            scanf("%d", &num);
        }
        printf("A maior sequencia foi %d", higherSequence);
    }