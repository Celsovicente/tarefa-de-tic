#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) 
{
	float a, b, c, d, x1, x2;
	printf("Digite os valores de a, b e c:\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a != 0)
	{
		d = pow(b,2) - 4*a*c;
		printf("\n O valor de delta e: %3.1f",d);
		if(d > 0)
		{
			x1 = (-b + sqrt(d)) / (2*a);
			x2 = (-b - sqrt(d)) / (2*a);
			printf("\n O valor de x1 e: %f, e o valor de x2 e: %f",x1,x1);
		}
		else if(d == 0)
		{
			x1= (-b ) / (2*a);
			printf("\n O valor de x e:\n %f",x1);
		}
		else
		{
			printf("\n Raizes Imaginarias");
		}
	}
	else
	{
		printf("\n Nao forma uma equacao do 2º grau!");
	}
	return 0;
}
