#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    
    float v1, r1, i1;
        v1 = 14;
        i1 = 250*(pow(10, -6));
        r1 = (v1/i1);
        
    printf("Para circular uma corrente de %f A com uma fonte de tensão de %.2f V a resistência deve ser de %.2f ohms.", i1, v1, r1);
    
    system("PAUSE");
    
    return 0;
}

