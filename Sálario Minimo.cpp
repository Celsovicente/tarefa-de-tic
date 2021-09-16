#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float salario_minimo, salario_receber, hora_t, salario_bruto, imposto, hora;
	printf("Digite o valor da hora de Trabalho e do Salario Minimo:\n");
	scanf("%f%f",&hora_t,&salario_minimo);
	hora = salario_minimo /2;
	salario_bruto = hora_t * hora_t;
	imposto = ((salario_bruto * 3) / 100);
	salario_receber = salario_bruto - imposto;
	printf("\n A hora de trabalho e de: %f",hora);
	printf("\n O Salario Bruto e de: %f",salario_bruto);
	printf("\n O imposto e de: %f",imposto);
	printf("\n O salario a receber e de: %f",salario_receber);
	getchar();
	return 0;
}
