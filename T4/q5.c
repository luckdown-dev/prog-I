#include <stdlib.h>
#include <stdio.h>

int main (){
    int n1, n2, contador1, contador2, divisores=0;
    
    do{
        printf("Informe o primeiro intervalo positivo: ");
        scanf("%i", &n1);

        if(n1<=0){
            printf("\nValor invalido! Por favor informe outro valor\n\n");
        }
        
    } while (n1<=0);
    
    do{
        printf("Informe o segundo intervalo positivo: ");
        scanf("%i", &n2);

        if(n2<=0){
            printf("\nValor invalido! Por favor informe outro valor\n\n");
        }
        
    } while (n2<=0);

    for(contador1=n1; contador1<=n2; contador1++){
    
        for(contador2=contador1; contador2>0; contador2--){
            if(contador1%contador2 == 0){
                divisores++;
            }
        }

        if(divisores == 2){
            printf("%i ", contador1);
        }

        divisores = 0;
    }

    printf("\n");

    system("pause");
    return 0;
}