#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale (LC_ALL, "Portuguese");
    
    float a1,r1,v1;
    
    printf("Informe o valor da corrente (A): ");
    scanf("%f", &a1);
    
    printf("Informe o valor da resistência (KΩ): ");
    scanf("%f", &r1);

    v1 = (a1*(r1*(pow(10,3))));
    
    printf("\nPara produzir uma corrente de %fA com uma resistência de %.4fKΩ, é necessária uma tensão de %.2fV.", a1,r1,v1);
    
    system("pause");
    return 0;
}

