#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
		setlocale(LC_ALL, "Portuguese");
	
		printf("\n \n  Ol�, seja bem vindo ao: JOGO DE CARTAS - Maior, Menor ou Igual :) \n");
		printf("  Nesse jogo, a m�quina lhe apresentar� no come�o uma carta aleat�ria, e basta � voc� jogador adivinhar \n");
		printf(" se a pr�xima carta ser� maior, menor, ou se ser� a mesma carta com um naipe diferente. :0 \n");
		printf("  Os Naipes das cartas n�o mudam, e s�o meramente ilustrativos, eles n�o tem valor ou naipe maior que o outro! \n");
		printf("  Pra quem n�o conhece os naipes s�o os seguintes: ESPADAS, PAUS, OUROS e COPAS \n");
		printf("  Agora que voc� entendeu como � o jogo, e a sobre as cartas, vamos jogar! :) \n");
	
	void embaralhar(char* vetor[], int tamanho){
    	srand(time(NULL));}  // Inicializa a semente do gerador de n�meros aleat�rios
	
	
    char* baralho[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    char* naipes[] = {"ESPADAS", "COPAS", "OUROS", "PAUS"};
    
    	embaralhar(baralho, 13);  // Embaralha o baralho
    
    int acertos = 0; // Vari�vel para contar os acertos
    
    while(1){
        	// Sorteia a primeira carta
    int cartaAtual = rand() % 13;
    int naipeAtual = rand() % 4;
    char* carta = baralho[cartaAtual];
    char* naipe = naipes[naipeAtual];
        
        printf(" \n  A carta inicial �: %s de %s\n", carta, naipe);
        
        	// Pede ao jogador para adivinhar se a pr�xima carta ser� maior ou menor
	char escolha;
        printf("  A pr�xima carta ser� maior ( + ), menor ( - ) ou igual ( = )? ");
        scanf(" %c", &escolha);
        
			// Sorteia a pr�xima carta
    int proximaCarta = rand() % 13;
    int proximoNaipe = rand() % 4;
    char* proxima = baralho[proximaCarta];
    char* proximoNaipeStr = naipes[proximoNaipe];
        
        printf("  A pr�xima carta �: %s de %s\n", proxima, proximoNaipeStr);
        
        	// Verifica se a escolha do jogador est� correta
        
    if((escolha == '+' || escolha == '-' || escolha == '=') && ((proximaCarta > cartaAtual && escolha == '+') || (proximaCarta < cartaAtual && escolha == '-') || (proximaCarta == cartaAtual && escolha == '='))){
        printf("  Parab�ns! Voc� acertou. :0  \n");
            acertos++;} 
		
	else{
            printf("  Que pena! Voc� errou. Mas n�o fique triste, eu acredito que voc� pode acertar na pr�xima. :) \n");}
            
        	// Verifica se o jogador deseja continuar jogando
        
	char continuar;
        printf("  Deseja continuar jogando? Digite S para SIM e N para N�O! :] ");
        scanf(" %c", &continuar);
        
    if(continuar != 'S' && continuar != 's'){
        break;} 
			// Se o jogador n�o quiser continuar, o loop � interrompido e o jogo acaba
	}
		printf("  Voc� acertou %d vezes. Muito obrigado por jogar! :) \n", acertos);
}
    

