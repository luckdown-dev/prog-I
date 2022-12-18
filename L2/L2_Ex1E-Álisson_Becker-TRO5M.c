#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    float salar, reaj, nsalar;
    printf("Informe o valor do salário mensal: ");
    scanf("%f", &salar);
    printf("Informe o percentual de reajuste(0~100): ");
    scanf("%f", &reaj);
    nsalar = ((reaj*pow(10,-2))*salar)+salar;
    printf("O novo salário reajustado sera de R$%.2f", nsalar);
    
    system("pause");
    return 0;
}