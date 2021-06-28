#include<stdio.h>

    int pointsMade(int distance){
        if(distance <= 800 && distance >= 0 ){
            return 1;
        }
        else if(distance >= 800 && distance <= 1400){
            return 2;
        }
        else if(distance >= 1400 && distance <= 2000){
            return 3;
        }
        else{
            return 0;
        }
    }

    int main (){
        int distance;
        printf("Insira a distância do arremesso:\n");
        scanf("%d", &distance);

        int result;
        result = pointsMade(distance);
        if(result>0){
        printf("O arremesso valeu %d ponto(s)", result);}
        else{printf("O arremesso não é válido, insira outra distância\n");}
    }