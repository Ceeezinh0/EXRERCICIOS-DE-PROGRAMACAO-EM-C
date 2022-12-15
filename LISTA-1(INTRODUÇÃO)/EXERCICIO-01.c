#include <stdio.h>

int main(){
	//01) Faça um programa que receba 3 notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
	//definir variaveis
	float n1, n2, n3, p1, p2, p3, media_ponderada;
	//entrada de dados
	printf("digite a primeira nota: ");
	scanf("%f", &n1);
	printf("digite o peso da primeira nota: ");
	scanf("%f", &p1);
	printf("digite a segunda nota: ");
	scanf("%f", &n2);
	printf("digite o peso da segunda nota: ");
	scanf("%f", &p2);
	printf("digite a terceira nota: ");
	scanf("%f", &n3);
	printf("digite o peso da terceira nota: ");
	scanf("%f", &p3);
	
	//processamento dos dados
	media_ponderada= ((n1*p1) + (n2*p2) + (n3*p3)) / (p1+p2+p3);
	
	//saida dos dados
	printf("a media ponderada e= %f", media_ponderada);
	return 0;
}