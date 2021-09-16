#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char** argv) 
{
	int soma_multiplo3 = 0;
	for(int i = 1; i < 500; i++)
	{
		if(i % 3 == 0)
		{
			if(i % 2 != 0)
			{
			soma_multiplo3+= i;
			}
		}
	}
	setlocale(LC_ALL,"Portuguese");
	printf("A soma dos números multiplos de 3 é = %d",soma_multiplo3);
	getchar();
	return 0;
}
