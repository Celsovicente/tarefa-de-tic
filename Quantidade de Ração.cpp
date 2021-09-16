#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float peso_saco, racao, racao1, quant_total;
	printf("Digite o peso da racao e a quantidade racao diaria para os 2 gatos:\n");
	scanf("%f%f%f",&peso_saco,&racao,&racao1);
	racao/= 1000;
	racao1/= 1000;
	quant_total =  peso_saco - 5 * (racao + racao1);
	printf("\n A quantidade total e de: %f gramas",quant_total);
	return 0;
}
