#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    int numb;
    
    printf("Informe um valor inteiro: ");
    scanf("%i", &numb);
    
    if (numb%2 == 0){
        printf("O valor informado é PAR");
    } else {
        printf("O valor infomado é IMPAR");
    }
    
    system("pause");
    return 0;
}