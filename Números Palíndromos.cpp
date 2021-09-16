#include <stdio.h>
#include <stdlib.h>
int main(int argc, char**  argv[])
{
	int n, unidade = 0, dezena = 0, centena = 0, milhar = 0, mil_milhares = 0;
	printf("Digite um numero de 5 digitos:\n");
	scanf("%d",&n);
	unidade = ((n / 1) % 10);
	dezena = ((n / 10) % 10);
	centena = ((n / 100) % 10);
	milhar = ((n / 1000) % 10);
	mil_milhares = ((n / 10000) % 10);
	if(mil_milhares == unidade && milhar == dezena)
	{
		printf("\n O numero e Palindromo");
	}
	else
	{
		printf("\n O numero nao e Palindromo");
	}
	getchar();
	return 0;
}
