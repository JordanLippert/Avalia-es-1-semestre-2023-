#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//Questão 1

void calcularValorDin(){
    float valor;
		printf("Digite um valor em dinheiro que você gostaria de retirar \n");
		scanf("%f",&valor);
	float cedulas = (100.00, 50.00, 20.00, 10.00, 5.00, 2.00);
	float moedas = (1.00, 0.50, 0.25, 0.10, 0.05, 0.01);
	int n100 = 0;
	int n50 = 0;
	int n20 = 0;
	int n10 = 0;
	int n5 = 0;
	int n2 = 0;
	int m1 = 0;
	int m050 = 0;
	int m025 = 0;
	int m010 = 0;
	int m005 = 0;
	int m001 = 0;
	
	while (valor >= 100){
		valor = valor - 100;
			n100++;}
				printf("Você recebeu %i notas de 100 reais \n", n100);
	while (valor >= 50){
		valor = valor - 50;
			n50++;}
				printf("Você recebeu %i notas de 50 reais \n", n50);
	while (valor >= 20){
		valor = valor - 20;
			n20++;}
				printf("Você recebeu %i notas de 20 reais \n", n20);
	while (valor >= 10){
		valor = valor - 10;
			n10++;}
				printf("Você recebeu %i notas de 10 reais \n", n10);
	while (valor >= 5){
		valor = valor - 5;
			n5++;}
				printf("Você recebeu %i notas de 5 reais \n", n5);		
	while (valor >= 2){
		valor = valor - 2;
			n2++;}
				printf("Você recebeu %i notas de 2 reais \n", n2);
	while (valor >= 1.00){
		valor = valor - 1.00;
			m1++;}
				printf("Você recebeu %i moedas de 1 real \n", m1);
	while (valor >= 0.50){
		valor = valor - 0.50;
			m050++;}
				printf("Você recebeu %i moedas de 50 centavos \n", m050);
	while (valor >= 0.25){
		valor = valor - 0.25;
			m025++;}
				printf("Você recebeu %i moedas de 25 centavos \n", m025);
	while (valor >= 0.10){
		valor = valor - 0.10;
			m010++;}
				printf("Você recebeu %i moedas de 10 centavos \n", m010);
	while (valor >= 0.05){
		valor = valor - 0.05;
			m005++;}
				printf("Você recebeu %i moedas de 5 centavos \n", m005);
	while (round(valor * 100)/100>=0.01){
		valor = valor - 0.01;
			m001++;}
				printf("Você recebeu %i moedas de 1 centavo \n", m001);
}

//Questão 2

void calcularNumerosPrimos(){
    int numero, divisor, resultado = 0;
		printf("Digite um número inteiro \n");
			scanf("%d",&numero);
	
	for(divisor = 2; divisor <= numero / 2; divisor++){
	if(numero % divisor == 0){
		resultado++;
			break;}
	}
	if(resultado == 0 ){
		printf("%d é um número primo \n", numero);
	}
	else{
		printf("%d não é um número primo \n", numero);
	}
}
    
//Questão 3    

void calculoDivisores(){
		
	int n, comeco, final, x, y, i;
		printf("Digite um número para N: \n");
		scanf("%d",&n);
		
		printf("Digite um número de começo para o intevalo: \n");
		scanf("%d", &comeco);
		
		printf("Digite um número para o final do intervalo: \n");
		scanf("%d", &final);
		
		printf("Os divisores de %d no intervalo de %d até %d são: \n", n, x, y);
		
		for(i = x; i <= y; i++){
			if(n % i == 0){
				printf("%d \n", i);
			}
		}
		
}

//Questão 4

void calculoPotencia(){
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
	printf("A potência de N elevado à K foi %i \n", potencia);
}

//Questão 5

void fibonacci(){
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

//Questão 6

void calcularMedia(){
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
	printf("A média desse aluno foi %f \n",media);
}

//Questão 7

void calculoSalarios(){
       
    int entrevistados, num;
	float maiorSalario = 0.00, salario;
	
		printf("Quantas pessoas serão entrevistadas? \n");
		scanf("%d",&entrevistados);
	
	for(num = 1; num <= entrevistados; num++){
	
		printf("Entrevistado %d, quanto você recebe de salário? \n", num);
		scanf("%f",&salario);
	
	if(salario > maiorSalario){
	    maiorSalario = salario;
	    }
    }
    	printf("O salário mais alto de todos os entrevistados foi de: R$ %f \n", maiorSalario);
}

//Questão 8

void calcularTaxaNatlidade() {
    double habitantesA = 5000000;
	double habitantesB = 7000000;
	int tempo = 0;
	
	while(habitantesA < habitantesB){
		habitantesA = habitantesA + 0.03 * habitantesA;
		habitantesB = habitantesB + 0.02 * habitantesB;
		tempo++;
	}
		printf("Será necessário %i anos para que o País A ultrapasse o País B em habitantes \n", tempo);
   
}

//Questão 9

	int numeroRandomico(int numeroMinimo, int numeroMaximo){
    	srand(time(NULL));

    return (rand() % numeroMaximo) + numeroMinimo;
}

	bool estaNoA = 0;
	bool estaNoB = 0;
	bool estaNoC = 0;

	void executarMovimento1() {
    bool temp = estaNoA;

    	estaNoA = estaNoB;
    	estaNoB = temp;
}

	void executarMovimento2() {
    bool temp = estaNoB;

    	estaNoB = estaNoC;
    	estaNoC = temp;
}

	void executarMovimento3() {
    bool temp = estaNoA;

    	estaNoA = estaNoC;
    	estaNoC = temp;
}


	void jogo(){
	int posicaoInicial = numeroRandomico(1, 3);
    char posicaoNome = ' ';
		fflush(stdin);
    switch (posicaoInicial) {
        case 1:
            estaNoA = true;
            posicaoNome = 'A';
        break;
        
		case 2:
            estaNoB = true;
            posicaoNome = 'B';
        break;
        
		case 3:
            estaNoC = true;
            posicaoNome = 'C';
        break;
}

    printf("Comecou no copo %c \n", posicaoNome);

    bool rodarLoop = true;
    while (rodarLoop) {
        int qualMovimentoRealizar = numeroRandomico(1, 3);

        switch (qualMovimentoRealizar) {
            case 1:
                executarMovimento1();
                printf("\n Executou o movimento 1 ");
            break;
            
			case 2:
                executarMovimento2();
                printf("\n Executou o movimento 2 ");
            break;
            
			case 3:
                executarMovimento3();
                printf("\n Executou o movimento 3 ");
            break;
}

        printf("\n\n Você quer chutar (s) ou prefere continuar jogando (n)? \n");
    char escolha;
        scanf("%c", &escolha);
        fflush(stdin);
    if (escolha == 's') {
            rodarLoop = false;
    continue;
        }
}

		printf(" Informe uma das letras para o seu chute: A, B ou C \n");

    char chute;
    	scanf("%c", &chute);
    	fflush(stdin);

    switch (chute) {
        case 'A':
            if (estaNoA) {
                printf("\n\n Você ganhou ! \n");
            return 0;
            }
            break;
        
		case 'B':
            if (estaNoB) {
                printf("\n\n Você ganhou ! \n");
            return 0;
            }
            break;
        
		case 'C':
            if (estaNoC) {

                printf("\n\n Você ganhou ! \n");
            return 0;
            }
            break;
	}
    	printf("\n\n Você errou caso queira tentar uma próxima vez escolha a opção 9, novamente. \n\n");

}

//MENU	
int main() {
    int opcao;
    
	setlocale(LC_ALL, "Portuguese");

    	printf("Qual a questão que você deseja resolver escolha um número entre 1 e 9: \n");
    	scanf("%d", &opcao);

    while(opcao !=0){
		switch (opcao){
        
		case 1:
            printf("Opcao 1 selecionada, você escolheu a operação Cálculo de Dinheiro.\n");
        calcularValorDin();
            break;
        case 2:
            printf("Opcao 2 selecionada, você escolheu a operação Cálculo de Número Primo.\n");
        calcularNumerosPrimos();
            break;
        case 3:
            printf("Opcao 3 selecionada, você escolheu a operação Cálculo de Divisores.\n");
        calculoDivisores();
            break;
        case 4:
            printf("Opcao 4 selecionada, você escolheu a operação Cálculo de Potências.\n");
        calculoPotencia();
            break;
        case 5:
            printf("Opcao 5 selecionada, você escolheu a operação Série de Fibonacci.\n");
        fibonacci();
            break;
        case 6:
            printf("Opcao 6 selecionada, você escolheu a operação Cálculo de Médias.\n");
        calcularMedia();
            break;
        case 7:
            printf("Opcao 7 selecionada, você escolheu a operação Cálculo de Salários.\n");
       	calculoSalarios();     
            break;
        case 8:
            printf("Opcao 8 selecionada, você escolheu a operação Taxa de Natalidade.\n");
        calcularTaxaNatlidade();
            break;
        case 9:
            printf("Opcao 9 selecionada, você escolheu o Jogo dos Copos.\n");
        jogo();
            break;
            
        default:
            printf("Opcao invalida.\n");
	}
		
	printf("Você deseja resolver outra questão? Se sim, digite um número de 1 à 9, senão, digite 0: \n");
	scanf("%d", &opcao);	
}
	
    return 0;
}
