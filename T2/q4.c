#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	float conta_corrente, conta_poupanca, especial, maior = 0, menor = 0;
	
	printf("Informe o saldo da conta corrente: R$ ");
	scanf("%f", &conta_corrente);
	printf("Informe o saldo da conta poupança: R$ ");
	scanf("%f", &conta_poupanca);
	
	if (conta_corrente > 1000 || conta_poupanca > 1000){
		if (conta_poupanca < conta_corrente){
			if (conta_poupanca*3 < conta_corrente*2){
				especial = conta_corrente * 2;
			} else {
				especial = conta_poupanca * 3;
			}
		} else {
			if (conta_poupanca*2 < conta_corrente*3){
				especial = conta_poupanca * 2;
			} else {
				especial = conta_corrente * 3;
			}
		}
		
		printf("O valor de saldo especial é de %.2f\n", especial);
		
	}else{
		printf("Sem conta especial\n");
	}
	
	
	system("pause");
	return 0;
}