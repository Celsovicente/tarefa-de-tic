#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
    int n, sucessor = 0;
    do
	{
    	printf("Digite um numero:\n");
    	scanf("%d",&n);
    	sucessor = n +1;
    	printf("O seu Sucessor : %d\n",sucessor);
	}
	while(n >= 0);
	getchar();
	return 0;
}
