#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float salario, novo_salario;
	printf("Digite o seu Salario:\n");
	scanf("%f",&salario);
	novo_salario = salario + ((salario * 25) / 100);
	printf("\n O seu novo Salario: %f",novo_salario);
	getchar();
	return 0;
}
