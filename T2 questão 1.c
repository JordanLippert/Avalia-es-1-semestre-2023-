#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float valor;
	printf("Digite um valor em dinheiro que você gostaria de retirar \n");
	scanf("%f",&valor);
	float cedulas = (100.00, 50.00, 20.00, 10.00, 5.00, 2.00);
	float moedas = (1.00, 0.50, 0.25, 0.10, 0.05, 0.01);
	int n100 = 0;
	int n50 = 0;
	int n20 = 0;
	int n10 = 0;
	int n5 = 0;
	int n2 = 0;
	int m1 = 0;
	int m050 = 0;
	int m025 = 0;
	int m010 = 0;
	int m005 = 0;
	int m001 = 0;
	
		while (valor >= 100){
			valor = valor - 100;
			n100++;}
				printf("Você recebeu %i notas de 100 reais \n", n100);
		while (valor >= 50){
			valor = valor - 50;
			n50++;}
					printf("Você recebeu %i notas de 50 reais \n", n50);
		while (valor >= 20){
			valor = valor - 20;
			n20++;}
					printf("Você recebeu %i notas de 20 reais \n", n20);
		while (valor >= 10){
			valor = valor - 10;
			n10++;}
				printf("Você recebeu %i notas de 10 reais \n", n10);
		while (valor >= 5){
			valor = valor - 5;
			n5++;}
				printf("Você recebeu %i notas de 5 reais \n", n5);		
		while (valor >= 2){
			valor = valor - 2;
			n2++;}
				printf("Você recebeu %i notas de 2 reais \n", n2);
		while (valor >= 1.00){
			valor = valor - 1.00;
			m1++;}
				printf("Você recebeu %i moedas de 1 real \n", m1);
		while (valor >= 0.50){
			valor = valor - 0.50;
			m050++;}
				printf("Você recebeu %i moedas de 50 centavos \n", m050);
		while (valor >= 0.25){
			valor = valor - 0.25;
			m025++;}
				printf("Você recebeu %i moedas de 25 centavos \n", m025);
		while (valor >= 0.10){
			valor = valor - 0.10;
			m010++;}
				printf("Você recebeu %i moedas de 10 centavos \n", m010);
		while (valor >= 0.05){
			valor = valor - 0.05;
			m005++;}
				printf("Você recebeu %i moedas de 5 centavos \n", m005);
		while (round(valor * 100)/100>=0.01){
			valor = valor - 0.01;
			m001++;}
				printf("Você recebeu %i moedas de 1 centavo \n", m001);
}

