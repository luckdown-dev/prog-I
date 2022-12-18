#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float idade, tempo, aboboras_peso, pontos;
	
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("-=-=-=-=-=-=- CAMPEONATO MUNDIAL -=-=-=-=-=-=-\n");
	printf("-=-=-=-=-=-=-=-=-=-=-= DE =-=-=-=-=-=-=-=-=-=-\n");
	printf("-=-=-=-=-=- TRANSPORTE DE ABÓBORAS =-=-=-=-=-=\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	printf("Calculo de Pontos, coloque os dados do participante\n\n");
	printf("Idade: ");
	scanf("%f", &idade);
	printf("Peso Transportado (Kg): ");
	scanf("%f", &aboboras_peso);
	printf("Tempo gasto (segundos): ");
	scanf("%f", &tempo);
	
	if (idade > 0 && idade < 18){
		printf("\nCATEGORIA: Jovem\n");
		
		if (tempo > 0 && tempo <= 30){
			pontos = 3 * aboboras_peso;
		}
		
		if ( tempo > 30){
			pontos = 2 * aboboras_peso;
		}
	}
	
	if (idade >= 18 && idade < 50){
		printf("\nCATEGORIA: Adulto\n");
		
		if (tempo > 0 && tempo <= 30){
			pontos = 5 * aboboras_peso;
		}
		
		if ( tempo > 30){
			pontos = 4 * aboboras_peso;
		}
	}
	
	if (idade >= 50){
		printf("\nCATEGORIA: Sênior\n");
		
		if (tempo > 0 && tempo <= 30){
			pontos = 7 * aboboras_peso;
		}
		
		if ( tempo > 30){
			pontos = 6 * aboboras_peso;
		}	
	}
	
	printf("Total de Pontos: %.2f\n\n", pontos);
	
	
	system("pause");
	return 0;
}