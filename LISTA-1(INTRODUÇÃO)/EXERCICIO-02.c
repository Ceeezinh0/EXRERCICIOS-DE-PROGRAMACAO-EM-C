#include <stdio.h>

int main(){
	//02) Escreva um programa que leia um número inteiro positivo e exiba o dobro do mesmo.
	//definir variaveis
	int num, dobro;
	//Entrada de dados
	printf("digite o numero inteiro= ");
	scanf("%d", &num);
	
	//processamento dos dados
	dobro= num*2;
	
	//saida dos dados
	printf("o dobro de %d = %d", num, dobro);
	return 0;
}