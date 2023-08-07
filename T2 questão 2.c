#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, divisor, resultado = 0;
	printf("Digite um número inteiro \n");
	scanf("%d",&numero);
	
	for(divisor = 2; divisor <= numero / 2; divisor++){
		if(numero % divisor == 0){
		resultado++;
		break;}
	}
		if(resultado == 0 ){
		printf("%d é um número primo \n", numero);
	}
		else{
		printf("%d não é um número primo \n", numero);
		}
	}
