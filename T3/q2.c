#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int time,idade,
		brasil15_20 = 0,
		c = 0;
	
	float porcent1,porcent2,porcent3,
		  time1 = 0,
		  time2 = 0,
		  time3 = 0,
		  total = 0;
	
	printf("TABELA DE IDENTIFICACAO\n");
	printf("1.Brasil\n2.Pelotas\n3.Farroupilha\n\n");
	
	while(c >= 0){
		printf("informe o time: ");
		scanf("%i", &time);
		if (time < 1 || time > 3){
			break;
		}
		printf("informe a idade: ");
		scanf("%i", &idade);
		
		if (time == 1){
			time1++;
			if(idade >= 15 && idade <= 20){
				brasil15_20++;
			}
		}
		if (time == 2){
			time2++;
		}
		if (time == 3){
			time3++;
		}
	}
	
	system("cls");

	porcent1 = (time1/(time1+time2+time3))*100;
	printf("Brasil: %.2f%%\n", porcent1);
	porcent2 = (time2/(time1+time2+time3))*100;
	printf("Pelotas: %.2f%%\n", porcent2);
	porcent3 = (time3/(time1+time2+time3))*100;
	printf("Farroupilha: %.2f%%\n", porcent3);
	
	printf("A quantidade de torcedores entre 15 e 20 anos no Brasil e de: %i\n", brasil15_20);
	
	system("pause");

	return 0;
}