#include <stdio.h>

int main(){
	//04) Escreva um programa para ler uma temperatura dada na escala Fahrenheit e exibir o equivalente em Celsius.
	//definir variaveis
	float fahrenheit, celsius;
	//entrada de dados
	printf("digite a temperatura em fahrenheit: ");
	scanf("%f", &fahrenheit);
	//processamento dos dados
	celsius =((fahrenheit-32)*5)/9;
	//saida dos dados
	printf("A conversao de fahrenheit para celsius= %f", celsius);
	return 0;
}