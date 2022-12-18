#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    float r1,r2,op,req;
    
    printf("|================================|\n");
    printf("|=====RESISTENCIA EQUIVALENTE====|\n");
    printf("|================================|\n\n");
    
    printf("Informe o primeiro resistor (Ω): ");
    scanf("%f", &r1);
    
    printf("Informe o segundo resistor (Ω): ");
    scanf("%f", &r2);
    
    printf("\n|============================|\n");
    printf("|==== TABELA DE LIGAÇÕES ====|\n");
    printf("|============================|\n\n");
    printf("1. Série\n2. Paralelo\n\nEscolha a operação: ");
    scanf("%f", &op);
    
    if (op==1){
        req = r1 + r2;
        printf("\nA resistência equivalente no série é %f(Ω)", req);
    } else {
        req = (1/((1/r1)+(1/r2)));
        printf("\nA resistência equivalente no paralelo é %f(Ω)", req);
    }
    
    system("pause");
    return 0;
}