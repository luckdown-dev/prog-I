#include <stdlib.h>
#include <stdio.h>

int main (){
	int c, c1, c2, c3;
	float pc1, pc2, pc3, total;
	
	printf("Informe a quantidade de votos do candidato 1: ");
	scanf("%i", &c1);
	
	printf("Informe a quantidade de votos do candidato 2: ");
	scanf("%i", &c2);
	
	printf("Informe a quantidade de votos do candidato 3: ");
	scanf("%i", &c3);
	
	total = c1+c2+c3;
	pc1 = (c1/total)*100;
	pc2 = (c2/total)*100;
	pc3 = (c3/total)*100;
	
	system("cls");
	
	printf("GRAFICO CANDIDATO 1 : (%.2f%%) ", pc1);
	for(c=1; c <= pc1/5; c++){
		printf("*");
	}
	
	printf("\nGRAFICO CANDIDATO 2 : (%.2f%%) ", pc2);
	for(c=1; c <= pc2/5; c++){
		printf("*");
	}
	
	printf("\nGRAFICO CANDIDATO 3 : (%.2f%%) ", pc3);
	for(c=1; c <= pc3/5; c++){
		printf("*");
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}