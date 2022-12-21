#include <stdlib.h>
#include <stdio.h>

int main (){
	int opcao, clientes=0, clientes_bagre=0;
    float peso_bagre, peso_linguado, peso_total_bagre=0;
    
	while(1){
	    do{
	   		printf("Informe a especie\n1.Bagre\n2.Linguado\n3.Sair\n\nOpcao: ");
	   		scanf("%i", &opcao);
	   		if (opcao<1||opcao>3){
	  			printf("\nCodigo Invalido!\n\n");
	  		}
		} while(opcao<1||opcao>3);
		
		if(opcao == 3){
			break;
		}
		
		switch(opcao){
			case 1:{
				while(1){
					printf("Informe o peso (Kg): ");
					scanf("%f", &peso_bagre);
					if(peso_bagre>=1) {
						peso_total_bagre=peso_total_bagre+peso_bagre;
						clientes++;
						break;
					} else {
						printf("\nPeso Invalido!\n\n");
					}
				}
				break;
			}
			
			case 2:{
				while(1){
					printf("Informe o peso (Kg): ");
					scanf("%f", &peso_linguado);
					if(peso_bagre >= 1){
						if(peso_linguado>1.5&&peso_linguado<2.5){
							clientes_bagre++;
						}
						clientes++;
						break;
							
					} else {
						printf("\nPeso Invalido!\n\n");
					}
				}
				
				break;
			}
		}	
		
	}
	
	printf("\n(%i) cliente(s) compraram peixes\n", clientes);
	printf("(%i) clientes compraram de 1,5 a 2,5 kg de linguado\n", clientes_bagre);
	printf("foram vendidos %.2f kg de bagre\n", peso_total_bagre);

	system("pause");
    return 0;
}