#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int avaliacoes, i;
	float notas, nota;
	printf("Quantas avalia��es foram feitas? \n");
	scanf("%i",&avaliacoes);
	float media;
	
	for(i = 0; i < avaliacoes; i++){
		printf("Qual nota ele tirou nessa avalia��o? \n");
		scanf("%f",&nota);
		notas = notas + nota;
	}
	media = notas/avaliacoes;
	printf("A m�dia desse aluno foi %f ",media);
	}
