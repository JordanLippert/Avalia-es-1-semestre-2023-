#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double habitantesA = 5000000;
	double habitantesB = 7000000;
	int tempo = 0;
	
	while(habitantesA < habitantesB){
		habitantesA = habitantesA + 0.03 * habitantesA;
		habitantesB = habitantesB + 0.02 * habitantesB;
		tempo++;
	}
	printf("Será necessário %i anos para que o País A ultrapasse o País B em habitantes", tempo);
	
}
