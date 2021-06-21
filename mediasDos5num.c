#include <stdio.h>
int main ()
{
    int n1, n2, n3, n4, n5;
    printf("Digite o n1:\n");
    scanf("%d", &n1);
    printf("Digite o n2:\n");
    scanf("%d", &n2);
    printf("Digite o n3:\n");
    scanf("%d", &n3);
    printf("Digite o n4:\n");
    scanf("%d", &n4);
    printf("Digite o n5:\n");
    scanf("%d", &n5);

    float resultado;
    resultado = (n1+n2)/2.00;
    printf("%f \n", resultado);
    resultado = (n1+n2+n3)/3.00;
    printf("%f \n", resultado);
    resultado = (n1+n2+n3+n4)/4.00;
    printf("%f \n", resultado);
    resultado = (n1+n2+n3+n4+n5)/5.00;
    printf("%f \n", resultado);
}