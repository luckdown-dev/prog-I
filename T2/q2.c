#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	float a1, a2 , a3;
	
	printf("Informe o primeiro angulo: ");
	scanf("%f", &a1);
	printf("Informe o segundo angulo: ");
	scanf("%f", &a2);
	printf("Informe o terceiro angulo: ");
	scanf("%f", &a3);
	
	if (a1+a2+a3 == 180){
		if (a1 == 90 && a2 != 90 && a3 != 90 || a2 == 90 && a1 != 90 && a3 != 90 || a3 == 90 && a1 != 90 && a2 != 90){
			printf("Triangulo Retangulo\n");
		}
		if (a1 > 90 && a2 < 90 && a3 < 90 || a2 > 90 && a1 < 90 && a3 < 90 || a3 > 90 && a1 < 90 && a2 < 90){
			printf("Triangulo Obtusângulo\n");
		}
		if (a1 < 90 && a2 < 90 && a3 < 90){
			printf("Triangulo Acutângulo\n");
		}
	} else {
		printf("Triangulo inválido!\n");
	}
	
	
	system("pause");
	return 0;
}