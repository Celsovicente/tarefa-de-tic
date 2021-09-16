#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float altura, maior = 0, menor = 10;
	for(int i =1; i <= 15;i++)
	{
		printf("Digite a sua altura:\n");
		scanf("%f",&altura);
		if(altura == 0)
		{
			maior = altura;
			menor = altura;
		}
		else if(altura > maior)
		{
			maior = altura;
		}
		else
		{
			menor = altura;
		}
	}
	printf("\n A maior altura e: %f, e a menor altura e: %f",maior,menor);
	getchar();
	return 0;
}
