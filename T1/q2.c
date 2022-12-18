#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    float comprimento, voltas, reab, consumo, dist, dist_reab, combus;
    
    printf("Informe o comprimento da pista (m): ");
    scanf("%f", &comprimento);
    printf("Informe o numero de voltas que seram percorridos: ");
    scanf("%f", &voltas);
    printf("Informe o numero de reabastecimentos desejados: ");
    scanf("%f", &reab);
    printf("Informe o consumo de combustivel do automovel (Km/l): ");
    scanf("%f", &consumo);
    
    dist = ((comprimento*(pow(10,-3)))*voltas);
    dist_reab = dist/(reab+1); // +1 por conta do abastecimento inicial antes da corrida
    combus = dist_reab/consumo;
    
    printf("A quantidade minima de combustivel a ser colocada no automovel é de: %.2f(litros)", combus);
    
    system("pause");
    return 0;
}