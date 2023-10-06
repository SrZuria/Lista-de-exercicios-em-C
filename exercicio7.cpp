/*
7. Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor.
a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
b) Pergunte ao usuário qual número ele quer pesquisar e diga quantas vezes este número está
presente no vetor.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(0, "portuguese");

	int numeros[10];
	int i;
	int contador_3 = 0;
	int numero_pesquisado;
	int contador_numero_pesquisado = 0;
	
	for (i=0; i<10; i++){
		printf("Digite um número inteiro: \n", i);
		scanf("%d", &numeros[i]);
		
		if (numeros[i] == 3) {
			contador_3 += 1;
		}
	}
	
	printf("O número 3 foi digitado %d vez(es).\n", contador_3);
	
	printf("Digite qual número você deseja que seja pesquisado: ");
	scanf("%d", &numero_pesquisado);
	
	for (i=0; i<10; i++) {
		if (numeros[i] == numero_pesquisado){
			contador_numero_pesquisado += 1;
		}
	}
	printf("O número pesquisado (%d) foi digitado %d vez(es).", numero_pesquisado, contador_numero_pesquisado);

	
	
}
