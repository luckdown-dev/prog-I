#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    float n1,n2,maior,menor;
    
    printf("----------------------------------\n");
    printf("--- Informe valores diferentes ---\n");
    printf("----------------------------------\n\n");
    printf("Informe o primeiro valor: ");
    scanf("%f", &n1);
    printf("Informe o segundo valor: ");
    scanf("%f", &n2);
    
    if (n1>n2){
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
    }
    
    printf("\nOs valores digitados em ordem crescente são respectivamente: %.2f, %.2f\n",menor,maior);
    
    system("pause");
    return 0;
}
