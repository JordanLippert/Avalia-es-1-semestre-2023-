#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int n;
	int k;
	printf("Digite um n�mero para N \n");
	scanf("%i",&n);
	printf("Digite um n�mero para K \n");
	scanf("%i",&k);
	int quantidadeN = 1;
	int potencia = 1;
	
	
	while(quantidadeN <= k){
		
		potencia = potencia * n;
		quantidadeN++;
		}
			printf("A pot�ncia de N elevado � K foi %i", potencia);
	}
