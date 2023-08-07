#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int avaliacoes, i;
	float notas, nota;
	printf("Quantas avaliações foram feitas? \n");
	scanf("%i",&avaliacoes);
	float media;
	
	for(i = 0; i < avaliacoes; i++){
		printf("Qual nota ele tirou nessa avaliação? \n");
		scanf("%f",&nota);
		notas = notas + nota;
	}
	media = notas/avaliacoes;
	printf("A média desse aluno foi %f ",media);
	}
