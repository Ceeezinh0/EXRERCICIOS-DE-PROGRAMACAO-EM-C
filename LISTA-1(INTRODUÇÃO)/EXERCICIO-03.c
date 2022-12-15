#include <stdio.h>

int main(){
	//03) Escreva um programa para calcular e exibir o comprimento de uma circunferência, sendo dada o valor de seu raio.
	//definir variaveis
	float raio, comprimento;
	//entrada de dados
	printf("digite o numero do raio= ");
	scanf("%f", &raio);
	
	//processamento dos dados
	comprimento= (2*3.14)*raio;
	
	//saida dos dados
	printf("O comprimento da circunferencia e= %f", comprimento);
	return 0;
}