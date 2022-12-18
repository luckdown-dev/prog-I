#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    int valor, n50, n20, n10, n5, n2, n1;
    
    printf("Informe um valor inteiro em R$: ");
    scanf("%i", &valor);
    
    n50 = valor/50;
    valor = valor - n50*50;
    
    n20 = valor/20;
    valor = valor - n20*20;
    
    n10 = valor/10;
    valor = valor - n10*10;
    
    n5 = valor/5;
    valor = valor - n5*5;
    
    n2 = valor/2;
    valor = valor - n2*2;
    
    n1 = valor;

    printf("\n%i (notas de 50)\n", n50);
    printf("%i (notas de 20)\n", n20);
    printf("%i (notas de 10)\n", n10);
    printf("%i (notas de 5)\n", n5);
    printf("%i (notas de 2)\n", n2);
    printf("%i (notas de 1)\n", n1);

    system("pause");
    return 0;
}