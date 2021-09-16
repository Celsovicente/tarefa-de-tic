#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float preco_fabrica, percentual_lucro, imposto, lucro_destribuidor, preco_final,valor;
	printf("Digite o valor do Fabrico, o percentual de lucro e o valor dos impostos:\n");
	scanf("%f%f%f",&preco_fabrica,&percentual_lucro,&imposto);
    lucro_destribuidor = ( preco_fabrica * percentual_lucro) / 100;
	imposto = (preco_fabrica* imposto) / 100;
	preco_final = preco_fabrica + percentual_lucro - imposto;
	printf("\n O lucro do destribuidor e de: %f",lucro_destribuidor);
	printf("\n O preco do impsto e de: %f",imposto);
	printf("\n O preco final do veiculo e: %f",preco_final);
	getchar();	
	return 0;
}
