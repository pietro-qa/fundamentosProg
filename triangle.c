#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

    bool verify(int a, int b, int c){
        int res;
        res = b - c;
        res = abs(res);
        if(res < a && a < b+c){
            res = a - c;
            res = abs(res);
            if(res < b && b < a+c){
                res = a - b;
                res = abs(res);
                if(res < c && c < a+b) return true;
                else return false;
            }
            else return false;
        }
        else return false;
    }

    int main (){
        int a,b,c;
        bool test;
        printf("Digite os valores dos lados triangulo:\n");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        test = verify(a, b, c);
        if(test){
            if(a == b && a == c) printf("O triangulo e equilatero.\n");
            else if (a == b || a == c || b == c) printf("O triangulo e isoceles.\n");
            else printf("O triangulo e escaleno.\n");
        }else printf("O triangulo não e valido.\n");
    }
