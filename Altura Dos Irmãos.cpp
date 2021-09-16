#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float altura1 = 1.50, altura2 = 1.10;
	int cont = 0;
	
	while(altura1 > altura2)
	{
		altura1 += 0.02;
		altura2 += 0.03;
		cont++; 
	}	 
	printf("Serao precisos %d anos para o Juca ter uma altura superior a do Chico!",cont);
	return 0;
}
