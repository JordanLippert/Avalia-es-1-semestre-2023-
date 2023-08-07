#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int n;
	int k;
	printf("Digite um número para N \n");
	scanf("%i",&n);
	printf("Digite um número para K \n");
	scanf("%i",&k);
	int quantidadeN = 1;
	int potencia = 1;
	
	
	while(quantidadeN <= k){
		
		potencia = potencia * n;
		quantidadeN++;
		}
			printf("A potência de N elevado à K foi %i", potencia);
	}
