#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define carne_espetinho 0.2

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    float quant, valor_carne, quant_carne, custo_unid, custo, vreceb, vliqui;
    
    printf("|=-=-=-=-=-=-=-=-=-=|\n");
    printf("|+++++ESPETINHO+++++|\n");
    printf("|++++++++DO+++++++++|\n");
    printf("|++++++++ZÉ+++++++++|\n");
    printf("|=-=-=-=-=-=-=-=-=-=|\n\n");
    
    printf("Informe a quantidade de espetinhos vendidos: ");
    scanf("%f", &quant);
    printf("Informe o valor de venda de cada espetinho (R$): ");
    scanf("%f", &custo_unid);
    printf("Informe o valor do Kg da carne (R$): ");
    scanf("%f", &valor_carne);
    
    quant_carne = (carne_espetinho*quant);
    printf("\nA quantidade total de carne utilizada nos espetinhos foi de %.2fKg\n", quant_carne);
    
    custo = quant_carne*valor_carne;
    vreceb = quant*custo_unid;
    vliqui = vreceb-custo;
    printf("O valor total recebido foi de R$%.2f\n", vreceb);
    printf("O lucro recebido com as vendas foi de R$%.2f\n", vliqui);
    
    system("pause");
    return 0;
}
