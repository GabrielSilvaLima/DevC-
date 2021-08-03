#include <stdio.h>

int main() {
	float km = 0;
	float gasolina = 0;
	for(int i=1; i>0; i++) {	
		printf("\nInforme o numero de quilometros rodados: ");
		scanf("%f", &km);
		printf("\n--------------------------------------------\n");	
		printf("\nInforme a quantidade de litros de gasolina consumidos: ");
		scanf("%f", &gasolina);
		printf("\n--------------------------------------------\n");
		float rendimento = km / gasolina;	
		printf("\nO consumo de km / L foi de: %.3f\n", rendimento);
		printf("\n--------------------------------------------\n");		
	}
	return(0);	
}
