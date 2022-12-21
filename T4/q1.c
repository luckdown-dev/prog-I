#include <stdlib.h>
#include <stdio.h>

int main (){
    float n1, n2, result;
    int op = 0;

    do {
		printf("Informe o primeiro valor: ");
	    scanf("%f", &n1);
	    while(1){
	        printf("Informe o segundo valor: ");
	        scanf("%f", &n2);
	        if (n2 == 0){
	            break;
	        } else {
	            printf("Divisor Invalido!!\n");
	        }
	    }
	    
	    result = n1/n2;
	    printf("O resultado da divisao e: %.2f\n", result);
	    
	    while(1){
			printf("Novo calculo (1. Sim; 2. Nao)\nOpcao: ");
	    	scanf("%i", &op);
	    	if (op == 1 || op == 2){
	    		break;
			}
		}
		
	} while (op != 2);
	
    system("pause");
    return 0;
}