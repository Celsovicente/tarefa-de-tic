#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float salario, percentual_aumento, aumento, novo_salario;
	printf("Digite o seu Salario e o Percentual de aumento:\n");
	scanf("%f%f",&salario,&percentual_aumento);
	aumento = (salario * percentual_aumento) / 100;
	novo_salario = salario + aumento;
	printf("\n O valor de aumento e de: %f, e o novo Salario e de: %f",aumento,novo_salario);
	getchar();
	return 0;
}
