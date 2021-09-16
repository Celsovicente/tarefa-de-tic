#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float area, lado = 0;
	printf("Digite os valores dos 2 lados:\n");
	scanf("%f%f",&lado);
	area = lado * lado;
	printf("\n A area do quadrado e de: %f",area);
	getchar();
	return 0;
}
