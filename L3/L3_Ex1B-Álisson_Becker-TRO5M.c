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
    
    printf("\nO maior valor informado foi: %.2f\n",maior);
    
    system("pause");
    return 0;
}
