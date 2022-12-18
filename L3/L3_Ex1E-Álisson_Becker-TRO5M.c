#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    float n1,n2,op,resultado;
    
    printf("|====================|\n");
    printf("|=====CALCULADORA====|\n");
    printf("|====================|\n\n");
    
    printf("Informe o primeiro valor: ");
    scanf("%f", &n1);
    
    printf("Informe o segundo valor: ");
    scanf("%f", &n2);
    
    printf("\n|============================|\n");
    printf("|=====TABELA DE OPERAÇÕES====|\n");
    printf("|============================|\n\n");
    printf("1. Adição\n2. Multiplicação\n\nEscolha a operação: ");
    scanf("%f", &op);
    
    if (op==1){
        resultado = n1 + n2;
        printf("\nA soma entre %f + %f = %f", n1,n2,resultado);
    } else {
        resultado = n1*n2;
        printf("\nA multiplicação entre %.1f x %.1f = %.1f", n1,n2,resultado);
    }
    
}