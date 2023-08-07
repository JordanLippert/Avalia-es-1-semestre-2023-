#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Digite um número de termos para calcular a série de Fibonacci \n");
	scanf("%i",&n);
	int numero1 = 1;
	int numero2 = 1;
	int sequencia1 = 0;
	int somatorio;
		printf("%d ",numero1);
				printf("%d ",numero2);

	for(sequencia1 = 2; sequencia1 <= n; sequencia1 = sequencia1 + 1){
		somatorio = numero1 + numero2;
		printf("%d ",somatorio);
		numero1 = numero2;
		numero2 = somatorio;
	}	
}
