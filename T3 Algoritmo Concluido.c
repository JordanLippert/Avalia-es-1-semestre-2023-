#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
		setlocale(LC_ALL, "Portuguese");
	
		printf("\n \n  Olá, seja bem vindo ao: JOGO DE CARTAS - Maior, Menor ou Igual :) \n");
		printf("  Nesse jogo, a máquina lhe apresentará no começo uma carta aleatória, e basta à você jogador adivinhar \n");
		printf(" se a próxima carta será maior, menor, ou se será a mesma carta com um naipe diferente. :0 \n");
		printf("  Os Naipes das cartas não mudam, e são meramente ilustrativos, eles não tem valor ou naipe maior que o outro! \n");
		printf("  Pra quem não conhece os naipes são os seguintes: ESPADAS, PAUS, OUROS e COPAS \n");
		printf("  Agora que você entendeu como é o jogo, e a sobre as cartas, vamos jogar! :) \n");
	
	void embaralhar(char* vetor[], int tamanho){
    	srand(time(NULL));}  // Inicializa a semente do gerador de números aleatórios
	
	
    char* baralho[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    char* naipes[] = {"ESPADAS", "COPAS", "OUROS", "PAUS"};
    
    	embaralhar(baralho, 13);  // Embaralha o baralho
    
    int acertos = 0; // Variável para contar os acertos
    
    while(1){
        	// Sorteia a primeira carta
    int cartaAtual = rand() % 13;
    int naipeAtual = rand() % 4;
    char* carta = baralho[cartaAtual];
    char* naipe = naipes[naipeAtual];
        
        printf(" \n  A carta inicial é: %s de %s\n", carta, naipe);
        
        	// Pede ao jogador para adivinhar se a próxima carta será maior ou menor
	char escolha;
        printf("  A próxima carta será maior ( + ), menor ( - ) ou igual ( = )? ");
        scanf(" %c", &escolha);
        
			// Sorteia a próxima carta
    int proximaCarta = rand() % 13;
    int proximoNaipe = rand() % 4;
    char* proxima = baralho[proximaCarta];
    char* proximoNaipeStr = naipes[proximoNaipe];
        
        printf("  A próxima carta é: %s de %s\n", proxima, proximoNaipeStr);
        
        	// Verifica se a escolha do jogador está correta
        
    if((escolha == '+' || escolha == '-' || escolha == '=') && ((proximaCarta > cartaAtual && escolha == '+') || (proximaCarta < cartaAtual && escolha == '-') || (proximaCarta == cartaAtual && escolha == '='))){
        printf("  Parabéns! Você acertou. :0  \n");
            acertos++;} 
		
	else{
            printf("  Que pena! Você errou. Mas não fique triste, eu acredito que você pode acertar na próxima. :) \n");}
            
        	// Verifica se o jogador deseja continuar jogando
        
	char continuar;
        printf("  Deseja continuar jogando? Digite S para SIM e N para NÃO! :] ");
        scanf(" %c", &continuar);
        
    if(continuar != 'S' && continuar != 's'){
        break;} 
			// Se o jogador não quiser continuar, o loop é interrompido e o jogo acaba
	}
		printf("  Você acertou %d vezes. Muito obrigado por jogar! :) \n", acertos);
}
    

