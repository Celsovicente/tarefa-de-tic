#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float custo_espetaculo, preco_convite, quantidade_convites;
	printf("Digite o Preco do Espetaculo e o Preco do Convite:\n");
	scanf("%f%f",&custo_espetaculo,&preco_convite);
	quantidade_convites = custo_espetaculo / preco_convite;
	printf("\n A quantidade de convites %f",quantidade_convites);
	return 0;
}
