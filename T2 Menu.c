
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int opcao;
    
	setlocale(LC_ALL, "Portuguese");

    printf("Qual a questão que você deseja resolver escolha um número entre 1 e 9: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Opcao 1 selecionada.\n");
        //codigo
            break;
        case 2:
            printf("Opcao 2 selecionada.\n");
            
            break;
        case 3:
            printf("Opcao 3 selecionada.\n");
            
            break;
        case 4:
            printf("Opcao 4 selecionada.\n");
            
            break;
        case 5:
            printf("Opcao 5 selecionada.\n");
            
            break;
        case 6:
            printf("Opcao 6 selecionada.\n");
            
            break;
        case 7:
            printf("Opcao 7 selecionada.\n");
            
            break;
        case 8:
            printf("Opcao 8 selecionada.\n");
    double habitantesA = 5000000;
	double habitantesB = 7000000;
	int tempo = 0;
	
	while(habitantesA < habitantesB){
		habitantesA = habitantesA + 0.03 * habitantesA;
		habitantesB = habitantesB + 0.02 * habitantesB;
		tempo++;
	}
	printf("Será necessário %i anos para que o País A ultrapasse o País B em habitantes \n", tempo);
	
            break;
        case 9:
            printf("Opcao 9 selecionada.\n");
            
            break;
            
        default:
            printf("Opcao invalida.\n");
    }
    
	printf("Você deseja resolver outra questão? Se sim, digite um número de 1 à 9, senão, digite 0");

    return 0;
}
