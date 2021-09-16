#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int idade, ano_actual, ano_nascimento, idade2050;
	printf("Digite o ano actual e o ano do seu nascimento:\n");
	scanf("%d%d",&ano_actual,&ano_nascimento);
	idade = ano_actual - ano_nascimento;
	idade2050 = 2050 - ano_nascimento;
	printf("Voce tem %d anos de idade, e em 2050 teras %d anos de idade",idade,idade2050);
	getchar();
	return 0;
}
