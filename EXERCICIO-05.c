#include <stdio.h>

int main(){
	//05) Escreva um programa para calcular a área de um triângulo, sendo dados a sua base e a sua altura.
	//definir variaveis
	float area, altura, base;
	//entrada de dados
	printf("digite a base do triangulo: ");
	scanf("%f", &base);
	printf("digite a altura do triangulo: ");
	scanf("%f", &altura);
	//processamento dos dados
	area= (base*altura)/2;
	//saida dos dados
	printf("a area do triangulo e= %f", area);
	return 0;
}