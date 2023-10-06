/*
7. Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor.
a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.
b) Pergunte ao usu�rio qual n�mero ele quer pesquisar e diga quantas vezes este n�mero est�
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
		printf("Digite um n�mero inteiro: \n", i);
		scanf("%d", &numeros[i]);
		
		if (numeros[i] == 3) {
			contador_3 += 1;
		}
	}
	
	printf("O n�mero 3 foi digitado %d vez(es).\n", contador_3);
	
	printf("Digite qual n�mero voc� deseja que seja pesquisado: ");
	scanf("%d", &numero_pesquisado);
	
	for (i=0; i<10; i++) {
		if (numeros[i] == numero_pesquisado){
			contador_numero_pesquisado += 1;
		}
	}
	printf("O n�mero pesquisado (%d) foi digitado %d vez(es).", numero_pesquisado, contador_numero_pesquisado);

	
	
}
