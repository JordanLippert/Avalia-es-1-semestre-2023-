#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	int numero = (rand() % 3) + 1;
	int n;
    int i;
    char temp;
    int posicaoMoeda;
    int copos;

    printf("Digite o número de movimentos: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        int pos1 = rand() % 3;
        int pos2 = rand() % 3;
        temp = copos[pos1];
        copos[pos1] = copos[pos2];
        copos[pos2] = temp;
    }

    printf("Digite a posisão da moeda (0 a 2): ");
    scanf("%d", &posicaoMoeda);
    
    temp = copos[posicaoMoeda];
    copos[posicaoMoeda] = copos[0];
    copos[0] = temp;
}

