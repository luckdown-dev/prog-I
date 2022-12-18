#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    float n1,n2,soma,rsoma;
    
    printf("=========================\n");
    printf("== VERIFICAÇÃO DE SOMA ==\n");
    printf("=========================\n\n");
    
    printf("Informe o primeiro valor: ");
    scanf("%f", &n1);
    
    printf("Informe o segundo valor: ");
    scanf("%f", &n2);
    
    printf("Informe a soma entre os numeros anteriores: ");
    scanf("%f", &soma);
    
    rsoma = n1+n2;
    
    if (rsoma==soma){
        printf("O resultado informado da soma condiz com o verdadeiro");
    } else {
        printf("O resultado informado da soma não esta correto, o valor real é %f", rsoma);
    }
    
    
    system("pause");
    return 0;
}