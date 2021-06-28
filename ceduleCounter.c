#include<stdio.h>


    int hundred(int value, int *q, int *r){
        *q = value/100;
        *r = value%100;
    }
    int fifthy(int value, int *q, int *r){
        *q = value/50;
        *r = value%50;
    }
    int twenty(int value, int *q, int *r){
        *q = value/20;
        *r = value%20;
    }
    int ten(int value, int *q, int *r){
        *q = value/10;
        *r = value%10;
    }
    int five(int value, int *q, int *r){
        *q = value/5;
        *r = value%5;
    }
    int two(int value, int *q, int *r){
        *q = value/2;
        *r = value%2;
    }
    int one(int value, int *q, int *r){
        *q = value/1;
        *r = value%1;
    }

    int main (){
        int q, r;
        scanf("%d", &r);

        hundred(r, &q, &r);
        printf("Notas de 100: %d\n", q);

        fifthy(r, &q, &r);
        printf("Notas de 50: %d\n", q);

        twenty(r, &q, &r);
        printf("Notas de 20: %d\n", q);

        ten(r, &q, &r);
        printf("Notas de 10: %d\n", q);

        five(r, &q, &r);
        printf("Notas de 5: %d\n", q);

        two(r, &q, &r);
        printf("Notas de 2: %d\n", q);
        
        one(r, &q, &r);
        printf("Notas de 1: %d\n", q);
    }
