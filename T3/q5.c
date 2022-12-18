#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int n,c,
		n1=0,
		n2=0;
	
	do{
		printf("Informe um valor inicial(N): ");
		scanf("%i", &n);
	} while(n < 1);
	
	for(c=1; c <= n; c++){
		printf("Informe o primeiro valor N%i: ", c);
		scanf("%i", &n1);
		printf("Informe o segundo valor N%i: ", c);
		scanf("%i", &n2);
		
		printf("\n");
		
		if(n1%n2 == 0){
			printf("%i / %i e divisivel\n\n", n1, n2);
		} else {
			printf("%i / %i nao e divisivel\n\n", n1, n2);
		}
	}
	
	system("pause");
	return 0;
}