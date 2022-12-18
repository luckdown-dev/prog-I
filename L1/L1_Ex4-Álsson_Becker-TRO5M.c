#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float s1, s2, s3, s4, mdia, msemana;
        s1 = 26;
        s2 = 35;
        s3 = 38;
        s4 = 32;
        msemana = (s1+s2+s3+s4)/4;
        mdia = msemana/5;
        
    printf("1. A média de clientes por semana é de: %.2f\n2. A média de clientes por dia é de: %.2f", msemana, mdia);
    
    system("PAUSE");
    
    return 0;
}
