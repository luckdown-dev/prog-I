#include <stdlib.h>
#include <stdio.h>

int main (){
    int op, n1, n2, maior=0, menor=0;
    
    do{
		printf("Informe a ordem (1.Crescente; 2.Decrescente)\nOpcao: ");
	    scanf("%i", &op);
	    
	    switch(op){
	    	
	    	//crescente
	    	case 1:{
	    		printf("Informe o primeiro valor: ");
	    		scanf("%i", &n1);
	    		
	    		printf("Informe o segundo valor: ");
	    		scanf("%i", &n2);
	    		
	    		if(n1>n2){
	    			maior = n1;
	    			menor = n2;
				} else {
					maior = n2;
					menor = n1;	
				}
				
				for(menor; menor <= maior; menor++){
					printf("%i ", menor);
				}
				
				printf("\n\n");
				
				break;
			}
	    	
			//decrescente	
	    	case 2:{
	    		printf("Informe o primeiro valor: ");
	    		scanf("%i", &n1);
	    		
	    		printf("Informe o segundo valor: ");
	    		scanf("%i", &n2);
	    		
	    		if(n1>n2){
	    			maior = n1;
	    			menor = n2;
				} else {
					maior = n2;
					menor = n1;	
				}
				
				for(maior; maior >= menor; maior--){
					printf("%i ", maior);
				}
				
				printf("\n\n");
				
				break;
			}
		}
		
	} while(op>=1 && op<=2);
	
    system("pause");
    return 0;
}