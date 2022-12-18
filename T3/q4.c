#include <stdlib.h>
#include <stdio.h>

int main (){
	int lim_sup=0,
		lim_inf=0,
		n,c1,c2,
		nint=0,
		nfora=0,
		temp=0;
	
	do{
		printf("Informe um valor inicial: ");
		scanf("%i", &n);
	} while (n < 1);
	
	printf("Informe o limite inferior: ");
	scanf("%i", &lim_inf);
	printf("Informe o limite superior: ");
	scanf("%i", &lim_sup);
	
	system("cls");

	for(c1=1; c1 <= n; c1++){
		printf("Informe o valor N%i: ", c1);
		scanf("%i", &temp);
		if (temp >= lim_inf && temp <= lim_sup){
			nint++;
		} else {
			nfora++;
		}
	}
	
	printf("\n%i (dentro)", nint);
	printf("\n%i (fora)\n", nfora);
		
	system("pause");
	return 0;
}