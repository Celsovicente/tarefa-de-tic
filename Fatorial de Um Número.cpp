#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int n, fatorial = 1;
	printf("Digite um numero:\n");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
	{
		fatorial*= i;
		printf("%d x ",i);
	}
	printf("\n O Fatorial e: %d",fatorial);
	getchar();
	return 0;
}
