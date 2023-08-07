#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char* baralho[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	void embaralhar(char* baralho[], int tamanho){
	
		srand(time(NULL));}
		
	char* baralho[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	    embaralhar(baralho, 13);  // Embaralha o baralho
    
    int acertos = 0; // Vari�vel para contar os acertos
    
    while (1) {
        // Sorteia a primeira carta
        int cartaAtual = rand() % 13;
        char* carta = baralho[cartaAtual];
        
        printf("Carta atual: %s\n", carta);
        
        // Pede ao jogador para adivinhar se a pr�xima carta ser� maior ou menor
        char escolha;
        printf("A pr�xima carta ser� maior ( + ), menor ( - ) ou igual ( = )? ");
        scanf(" %c", &escolha);
        
        // Sorteia a pr�xima carta
        int proximaCarta = rand() % 13;
        char* proxima = baralho[proximaCarta];
        
        printf("Pr�xima carta: %s\n", proxima);
        
        // Verifica se a escolha do jogador est� correta
        if ((escolha == '+' || escolha == '-' || escolha == '=') && ((proximaCarta > cartaAtual && escolha == '+') || (proximaCarta < cartaAtual && escolha == '-') || (proximaCarta == cartaAtual && escolha == '='))) {
            printf("Parab�ns! Voc� acertou.\n");
            acertos++;
        } else {
            printf("Que pena! Voc� errou.\n");
        }
        
        // Verifica se o jogador deseja continuar jogando
        char continuar;
        printf("Deseja continuar jogando? (S/N): ");
        scanf(" %c", &continuar);
        
        if (continuar != 'S' && continuar != 's') {
            break; // Se o jogador n�o quiser continuar, o loop � interrompido e o jogo acaba
        }
    }
    
    printf("Voc� acertou %d vezes. Obrigado por jogar!\n", acertos);
    
    return 0;
}
	

