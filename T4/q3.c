#include <stdlib.h>
#include <stdio.h>

int main (){
    int n1, 
		c=0,
		perfeito=0;
    
    while(1){
    	printf("Informe um numero: ");
    	scanf("%i", &n1);
    	
    	if (n1 <= 0){
    		break;
		}
		
		for(c = n1-1; c >= 1; c--){
			if (n1%c == 0){
				perfeito=perfeito+c;
			}
		}
		if(n1==perfeito){
			printf("E perfeito\n\n");
		} else {
			printf("Nao e perfeito\n\n");
		}
		
		perfeito = 0;
	}

    system("pause");
    return 0;
}