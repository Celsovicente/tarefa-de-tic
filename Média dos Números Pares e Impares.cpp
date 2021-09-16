#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	int n, soma_par = 0,quant = 0,soma_impar = 0,quant1 = 0;
	float media_par, media_impar;
	for(int i = 1; i <= 10; i++)
	{
		printf("Digite um numero:\n");
		scanf("%d",&n);
		if(n % 2 == 0)
		{
			soma_par+= n;
			quant++;
		}
		else
		{
			soma_impar+=n;
			quant1++;	
		}
	}
	media_par = soma_par/ quant;
	media_impar = soma_impar / quant1;
	printf("\n A media dos numeros pares e: %f, e a dos numeros impares e: %f",media_par,media_impar);
	return 0;
}
