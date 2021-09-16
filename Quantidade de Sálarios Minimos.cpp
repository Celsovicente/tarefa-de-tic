#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float  salario,salario_minimo, quantidade_salario;
	printf("Digite o Salario do Funcionario e o seu salario minimo:\n");
	scanf("%f%f",&salario,&salario_minimo);
	quantidade_salario = salario / salario_minimo;
	printf("\n A quantidade de salarios minomos e de: %f",quantidade_salario);
	getchar();
	return 0;
}
