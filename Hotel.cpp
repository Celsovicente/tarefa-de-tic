#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	//"Quanto mais nos elevamos, menores parecemos aos olhos daqueles que não sabem voar." -- Friedrich
	//Wilhelm Nietzsche//
	int dia, n_quartos;
	float  total, total_renda = 0;
	char nome[30];
	printf("Digite o numero de quartos disponiveis:\n");
	scanf("%d",&n_quartos);
	if(n_quartos <= 30)
	{
		for(int i = 1; i <= n_quartos; i++)
		{
			printf("Digite o nome, e o numero de dias que ficara hospedado:\n");
			scanf("%s%d",&nome[i],&dia);
			if(dia < 15)
			{
				total =(dia* 50)+(dia*4.0);
				printf("\n O clinte %s tem %f na sua conta\n",nome,total);
			}
			else if(dia == 15)
			{
				total =(dia* 50)+(dia*3.60);
				printf("\n O clinte %s tem %f na sua conta\n",nome,total);	
			}
			else
			{
				
				total =(dia* 50)+(dia*3.0);
				printf("\n O clinte %s tem %f na sua conta\n",nome,total);
			}
			total_renda +=total;
		}
	}
	
	else
	{
		printf("\n Nao temos qu;artos disponiveis");
	}
	printf("\n O= total da conta do hotel e de: \n %f",total_renda);
	getchar();
	return 0;
}
