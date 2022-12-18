#include <stdio.h>
#include <stdlib.h>

int main () {
    
    float   r1 = 10000,
            r2 = 2200,
            r3 = 27000,
            r4 = 47000,
            r5 = 68000,
            req = ((1/((1/r3)+(1/r4)+(1/r5)))+r1+r2);
    
    printf("O valor da resistência equivalente do circuito é %.2f ohms.", req);
    
    system("PAUSE");
    
    return 0;
    
}