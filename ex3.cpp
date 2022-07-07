#include <stdio.h>

int main(){
	int i, posMaior, posMenor, contMedia, contMaior;
	float media, maiorN, menorN, total, n[30];
	
	maiorN = n[0];
	
	for(i = 0; i < 30; i++){
		printf("Digite um numero do dia %d: ", i+1);
		scanf("%f", &n[i]);
		
		if(n[i] > maiorN){
			maiorN = n[i];
			posMaior = i;
		}
		
		if(n[i] != 0)
		{
			contMedia++;
		}
		
	}
	
	menorN = n[0];
	
	for(i = 0; i < 30; i++){
		if(n[i] < menorN){
			menorN = n[i];
			posMenor = i;
		}
		
		total += n[i];
	}
	
	media = total / contMedia;
	
	for(i = 0; i < 30; i++)
	{
		if(n[i] > media)
		{
			contMaior++;
		}
	}
	
	printf("\n--------Lucro Mensal--------");
	printf("\nO maior lucro e de R$%.2f no dia %d\n", maiorN, posMaior + 1);
	printf("O menor lucro e de R$%.2f no dia %d\n", menorN, posMenor + 1);
	printf("Lucro total - %.2f\n\n", total);
	printf("Media do lucro - %.2f\n", media);
	printf("Dias de lucro maior que a media - %d\n", contMaior);
	
	//printf("%d\n", contMedia);
}
