//2.Crie uma função que calcule área e perimetro de um retangulo utilizando ponteiros
#include <stdio.h>

//Implemente a função
void calcular_retangulo(float largura, float altura, float *area, float *perimetro){
	//Calcule area e perimetro usando ponteiros
	//area = largura * altura;
	//perimetro= 2 * (largura + altura);
	
	*area = largura * altura;
	*perimetro = 2 * (largura + altura);
	
}

int main(){
	float l = 5.0, h = 3.0;
	float area, perimetro;
	
	calcular_retangulo(l, h, &area, &perimetro);
	
	printf("Retangulo %.1f x %.1f\n", l, h);
	printf("Area: %.2f\n", area);
	printf("Perimetro: %.2f", perimetro);
	
	return 0;
}
