#include <stdio.h>
#define N 10

    int main(){
        printf("Instrucos basicas:\n");
        printf("Vc deve pensar em um numero entre 0 e %d e a maquina vai tentar adivinhar\n", N);
        printf("Quando o palpite for feito deve ser respondido com, 1 = menor, 2 = igual ou 3 = maior\n");

        int feedback, palpite, numPalpite = 0, i = 0, numMin = 0, palpiteAnt1, palpiteAnt3;

        palpite = N/2;
        printf("Palpite: %d\n", palpite);

        numPalpite++;
        scanf("%d", &feedback);

        //verificando se feedback for igual(2) n entra no loop
        while(feedback != 2 ){
            //verificando se o feedback é menor
            if(feedback == 1){
                palpite = palpite/2;

                //verifica se deu o palpite em até 2 lances anteriores, se sim soma 1
                if(palpiteAnt1 == palpite) palpite++;

                printf("Palpite: %d\n", palpite);
                numPalpite++;

                scanf("%d", &feedback);
                palpiteAnt1 = palpite;
            }

            //verificando se o feedback é menor
            if(feedback == 3){
                palpite = (palpite+N)/2;

                //if(palpite == N-1){
                //    if(i == 0){
                //        printf("Palpite: %d\n", palpite);
                //        numPalpite++;
                //        scanf("%d", &feedback);
                //        i++;    
                //    }
                //    else{
                //        printf("Palpite: %d\n", N);
                //        numPalpite++;
                //        scanf("%d", &feedback);
                //    };
                //}

                //verifica se deu o palpite em até 2 lances anteriores, se sim soma 1
                if(palpiteAnt3 == palpite) palpite++;
                
                printf("Palpite: %d\n", palpite);
                numPalpite++;
                scanf("%d", &feedback);
                palpiteAnt3 = palpite;
            }
        }
        printf("O num de palpites foi: %d", numPalpite);
    }