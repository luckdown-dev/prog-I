#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    
    float fah,cels;
    
    printf("===CONVERSOR DE TEMPERATURA===\n");
    printf("=== Fahrenheit to Celsius ===\n\n");
    
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fah);
    
    cels = (((fah-32)/9)*5);
    
    printf("A temperatura em Celsius é de %.2fºC", cels);

    system("pause");
    return 0;
}