#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    float num;
    printf("Informe um valor (positivo ou negativo): ");
    scanf("%f", &num);
    
    if (num >= 0){
        printf("O valor informado é POSITIVO");
    } 
    else{
        printf("O valor informado é NEGATIVO");
    }
    
    system("pause");
    return 0;
}