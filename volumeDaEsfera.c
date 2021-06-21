#include<stdio.h>
#include<math.h>
int main(){
    int raio;
    float volume;
    printf("Digite seu raio:\n");
    scanf("%d", &raio);
    volume = (4.0/3.0) * M_PI *raio*raio*raio;
    printf("O seu raio é: %f",volume);
    return 0;
}