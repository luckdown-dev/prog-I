#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.141592

int main (){
    setlocale (LC_ALL, "Portuguese");
    
    float raio, area;
    printf("Informe o raio do circulo(em cm): ");
    scanf("%f", &raio);
    
    area = (PI * (pow(raio,2)));
    
    printf("\nUm circulo de raio %.3fcm possui uma área de %.4fcm²", raio, area);
    
    system("pause");
    return 0;
}
