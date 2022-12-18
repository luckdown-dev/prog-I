#include <stdio.h>
#include <stdlib.h>

int main (){
	int c, mesas;
	float avoto, branco, nulo, bvoto, votos_a_total, votos_b_total, nulo_total, branco_total, porcent_a, porcent_b, porcent_invalidos;
	
		votos_a_total = 0;
		votos_b_total = 0;
		nulo_total = 0;
		branco_total = 0;
	
	printf("Informe a quantidade de mesas da zona: ");
	scanf("%i", &mesas);
	
	for(c=1; c<=mesas; c++){

		system("cls");
		
		printf("\nMESA %i\n", c);
		printf("\nInforme a quantidade de votos VALIDOS do candidato A: ");
		scanf("%f", &avoto);
		votos_a_total = (votos_a_total + avoto);
		
		printf("\nInforme a quantidade de votos VALIDOS do candidato B: ");
		scanf("%f", &bvoto);
		votos_b_total = votos_b_total + bvoto;
		
		printf("\nInforme a quantidade de votos brancos: ");
		scanf("%f", &branco);
		branco_total = branco_total + branco;
		
		printf("\nInforme a quantidade de votos nulos: ");
		scanf("%f", &nulo);
		nulo_total = nulo_total + nulo;
		
	}
	
	system("cls");
	
	porcent_a = (votos_a_total / (votos_a_total + votos_b_total))*100;
	printf("Porcentagem do candidato A: %.2f%%\n", porcent_a);
	
	porcent_b = (votos_b_total / (votos_a_total + votos_b_total))*100;
	printf("Porcentagem do candidato B: %.2f%%\n", porcent_b);
	
	
	porcent_invalidos = ((nulo_total + branco_total)/(votos_a_total + votos_b_total + nulo_total + branco_total))*100;
	printf("Porcentagem de votos invalidos: %.2f%%\n\n", porcent_invalidos);
	
	if (votos_a_total > votos_b_total){
		printf("\nRESULTADO: CANDIDATO A GANHOU\n");
	}
	if (votos_b_total > votos_a_total){
		printf("\nRESULTADO: CANDIDATO B GANHOU\n");
	}
	if (votos_a_total == votos_b_total){
		printf("\nRESULTADO: EMPATE\n");
	}
	
	system("pause");
	return 0;
}