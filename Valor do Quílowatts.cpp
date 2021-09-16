#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	double salario_minimo, valor_kilo ,desconto, valor_residencia, quant, valor_final; 
	printf("Digite o valor do seu Salario minimo, e a quantidade de Quilowotts:\n");
	scanf("%f%f",&salario_minimo,&quant);
	valor_kilo = salario_minimo /5;
	valor_residencia = valor_kilo * quant;
	desconto = (valor_residencia * 15 )/100;
	valor_final = valor_residencia - desconto;
	printf("\n O valor de cada Quilowatts e de: %f",valor_kilo);
	printf("\n O valor de cada residencia e de: %f",valor_residencia);
	printf("\n O valor com o desconto e de: %f",valor_final);
	getchar();
	return 0;
}
