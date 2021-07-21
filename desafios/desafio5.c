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

        // verifica se o resultado de x1 * resultado de x2 é maior que 0
        if(func1(x1) * func1(x2) < 0){
            x = (x1+x2)/2;
            
            //enquanto o modulo de f(x) for maior que a constante definida roda o loop
            while (fabs(func1(x)) > Epsilon){

                // verifica se o resultado de x1 * resultado de x é menor que 0
                if(func1(x1) * func1(x) <= 0)
                    x2 = x;
                else
                    x1 = x;

                //redefine o valor de X
                x = (x1+x2)/2;
            }

            //quando sai do loop, obtemos a raiz como o valor de X
            printf("A raiz e %f", x);
        }

        //se a condição não é cumprida, não existe raiz no intervalo
        else
            printf("Nao ha raizes no intervalo dado");
    }

        int bissecFunc2 (double x1, double x2) {
        double x;

        // verifica se o resultado de x1 * resultado de x2 é maior que 0
        if(func2(x1) * func2(x2) < 0){
            x = (x1+x2)/2;
            
            //enquanto o modulo de f(x) for maior que a constante definida roda o loop
            while (fabs(func2(x)) > Epsilon){
                
                // verifica se o resultado de x1 * resultado de x é menor que 0
                if(func2(x1) * func2(x) <= 0)
                    x2 = x;
                else
                    x1 = x;

                //redefine o valor de X
                x = (x1+x2)/2;
            }

            //quando sai do loop, obtemos a raiz como o valor de X
            printf("A raiz e %f", x);
        }

        //se a condição não é cumprida, não existe raiz no intervalo
        else
            printf("Nao ha raizes no intervalo dado");
    }

    //função para calculo do valor de X da primeira função da atividade, valor de X passado como parâmetro.
    double func1(double x){
        double res;

        //pow apenas eleva o primero valor a potencia do segundo valor
        res = pow(x, 2) - pow(2, x);
        return res;
    }

    //função para calculo do valor de X da segunda função da atividade, valor de X passado como parâmetro. 
    double func2(double x){
        double res;
        
        //pow apenas eleva o primero valor a potencia do segundo valor
        res = pow(x, 3) - (9*x) + 3;
        return res;
    }