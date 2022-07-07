#include <stdio.h>

int main() {
    int vetor[10];
    int i = 2;
    int nInformado;
    int flag = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &nInformado);
    
    for (i = 0; i < 10; i++)
    {
    	if (i == 0)
    	{
    		vetor[0] = 0;
    		printf("%d\n", vetor[i]);
		}
		
		else if (i == 1)
		{
			vetor[1] = 1;
			printf("%d\n", vetor[i]);
		}
		
		else
		{
			vetor[i] = vetor[i-1] + vetor[i-2];
    		printf("%d\n", vetor[i]);
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		if (nInformado == vetor[i])
		{
			flag = 1;
		}		
	}
	
	if (flag == 1)
	{
		printf("\n%d esta na lista", nInformado);
	}
	
	else
	{
		printf("\n%d nao esta na lista", nInformado);
	} 	
}
