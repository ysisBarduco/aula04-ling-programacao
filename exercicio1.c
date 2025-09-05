//1.Complete o código abaixo:
#include <stdio.h>

int main(){
	float salario = 2500.50;
	float *ponteiro_salario;
	
	//TODO: Faça o ponteiro apontar para salário
	ponteiro_salario = &salario;
	
	//TODO: Imprima o valor usando o ponteiro
	printf("Salario atual: %.2f\n", *ponteiro_salario);
	
	//TODO: Modifique o salário através do ponteiro para 3000
	*ponteiro_salario = 3000.00;
	
	//TODO: Imprima o novo valor
	printf("Novo salario: %.2f\n", salario);
	
	return 0;
}
