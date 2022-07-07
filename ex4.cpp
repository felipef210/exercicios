#include <stdio.h>

int main() {
	float sp = 67836.43;
	float rj = 36678.66;
	float mg = 29229.88;
	float es = 27165.48;
	float outros = 19849.53;
	float total = sp + rj + mg + es + outros;
	
	float porcentagem_sp = (100*sp) / total;
	float porcentagem_rj = (100*rj) / total;
	float porcentagem_mg = (100*mg) / total;
	float porcentagem_es = (100*es) / total;
	float porcentagem_outros = (100*outros) / total;
	
	printf("---Faturamento em porcentagem---\n\n");
	printf("Porcentagem SP - %.2f\n", porcentagem_sp);
	printf("Porcentagem RJ - %.2f\n", porcentagem_rj);
	printf("Porcentagem MG - %.2f\n", porcentagem_mg);
	printf("Porcentagem ES - %.2f\n", porcentagem_es);
	printf("Porcentagem Outros - %.2f\n", porcentagem_outros);	
}
