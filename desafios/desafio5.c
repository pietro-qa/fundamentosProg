#include <stdio.h>
#include <math.h>
#define Epsilon 0.0000000001

    int bissecFunc1 (double x1, double x2);
    int bissecFunc2 (double x1, double x2);
    double func1(double x);
    double func2(double x);

    int main(){
        bissecFunc1 (1, 2.5);
        bissecFunc2 (1, 4);
    }

    int bissecFunc1 (double x1, double x2) {
        double x;

        if(func1(x1) * func1(x2) < 0){
            x = (x1+x2)/2;
            

            while (fabs(func1(x)) > Epsilon){
                if(func1(x1) * func1(x) <= 0)
                    x2 = x;
                else
                    x1 = x;

                x = (x1+x2)/2;
            }
            printf("A raiz e %f", x);
        }
        else
            printf("Nao ha raizes no intervalo dado");
    }

        int bissecFunc2 (double x1, double x2) {
        double x;

        if(func2(x1) * func2(x2) < 0){
            x = (x1+x2)/2;
            

            while (fabs(func2(x)) > Epsilon){
                if(func2(x1) * func2(x) <= 0)
                    x2 = x;
                else
                    x1 = x;

                x = (x1+x2)/2;
            }
            printf("A raiz e %f", x);
        }
        else
            printf("Nao ha raizes no intervalo dado");
    }

    double func1(double x){
        double res;
        res = pow(x, 2) - pow(2, x);
        return res;
    }

    double func2(double x){
        double res;
        res = pow(x, 3) - (9*x) + 3;
        return res;
    }