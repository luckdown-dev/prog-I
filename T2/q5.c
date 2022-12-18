#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int op1, op2;
	float comp1, comp2, req;
	
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("-=-=-=-= ELETRONICA SHOP =-=-=-=-=\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	printf("Informe o tipo de componete\n1.Resistor\n2.Capacitor\n3.Indutor\n\nOpção: ");
	scanf("%i", &op2);
	printf("Informe a ligação dos componentes\n1.Série\n2.Paralelo\n\nOpção: ");
	scanf("%i", &op1);
	printf("Informe o valor do primeiro componente: ");
	scanf("%f", &comp1);
	printf("Informe o valor do segundo componente: ");
	scanf("%f", &comp2);
	
	switch(op1){
		case 1: switch (op2){
			
						case 1: req = comp1 + comp2;
								printf("O valor equivalente da associação série entre resistores é de %.2f ohms\n", req);
								break;
							
						case 2: req = (1/(1/comp1+1/comp2));
								printf("O valor equivalente da associação série entre capacitores é de %.2f mF\n", req*pow(10,3));
								break;
							
						case 3: req = (1/(1/comp1+1/comp2));
								printf("O valor equivalente da associação série entre indutores é de %.2f mH\n", req*pow(10,3));
								break;
								
						default: printf("Opção Invalida de componentes!\n");
				}
				
			break;
		
		case 2: switch (op2){
			
						case 1: req = (1/(1/comp1+1/comp2));
								printf("O valor equivalente da associação paralelo entre resistores é de %.2f ohms\n", req);
								break;
							
						case 2: req = comp1+comp2;
								printf("O valor equivalente da associação paralelo entre capacitores é de %.2f mF\n", req*pow(10,3));
								break;
							
						case 3: req = comp1+comp2;
								printf("O valor equivalente da associação paralelo entre indutores é de %.2f mH\n", req*pow(10,3));
								break;
								
						default: printf("Opção Invalida de componentes!\n");						
				}
				
		default: printf("Opção Invalida de ligação!\n");
		
		break;
				
	}
	

	system("pause");
	return 0;
}