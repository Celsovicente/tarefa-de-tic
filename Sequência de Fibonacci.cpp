#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int n, n1 = 0, n2 = 1, soma = 0;
	printf("Digite a Quantidade de termos:\n");
	scanf("%d",&n);
	printf("\n %d\n %d\n",n1,n2);
	for(int i = 1; i <= n; i++)
	{
		soma = n1 + n2;
		printf(" %d\n",soma);
		n1 = n2;
		n2 = soma;
	}
	getchar();
	return 0;
}
