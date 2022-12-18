#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
	
	float altura, peso;
	
	printf("Informe a altura do competidor: ");
	scanf("%f", &altura);
	printf("Informe o peso do competidor (Kg): ");
	scanf("%f", &peso);
	
		if (peso >= 70 && peso <= 80 && altura >= 1.75 && altura <= 1.90){
			printf("ACEITO\n");
		}
		
		if (peso < 70 && peso > 80 && altura < 1.75 && altura > 1.90) {
			printf("TOTALMENTE RECUSADO\n");
		} else {
			if (peso < 70 || peso > 80){
				printf("RECUSADO POR PESO\n");
			}
			if (altura < 1.70 || altura > 1.90){
				printf("RECUSADO POR ALTURA\n");
			}
		}
		
	
	system("pause");
	return 0;
}