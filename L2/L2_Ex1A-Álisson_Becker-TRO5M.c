#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    float r1,r2,r3,req;
    printf("**Resistência equivalente em série**\n\nInforme o valor dos 3 resistores em ohms (Ω)\n");
    printf("Resistor 1: ");
    scanf("%f", &r1);
    printf("Resistor 2: ");
    scanf("%f", &r2);
    printf("Resistor 3: ");
    scanf("%f", &r3);
    
    req = (r1+r2+r3);
    printf("A resistência equivalente em série para os resistores de %f(Ω), %f(Ω) e %f(Ω) é de %f(Ω)",r1,r2,r3,req);
    
    return 0;
}