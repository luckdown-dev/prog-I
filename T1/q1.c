#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    int t_inicio, t_final, t_total;
    float potencia, custo, tarifa;
    
    printf("====================\n");
    printf("==== CUSTO BANHO ===\n");
    printf("====================\n\n");
    
    printf("Informar o horário de inicio do banho: ");
    scanf("%i", &t_inicio);
    printf("Informar o horário de termino do banho: ");
    scanf("%i", &t_final);
    printf("Informar a potencia do chuveiro (W): ");
    scanf("%f", &potencia);
    printf("Informe a custo do kWh em R$: ");
    scanf("%f", &tarifa);
    
    t_total = t_final - t_inicio;
    custo = (((potencia*(pow(10,-3)))*tarifa)*t_total);
    
    printf("\nO custo total do banho seria de R$%.2f", custo);
    
    
    system("pause");
    return 0;
}
