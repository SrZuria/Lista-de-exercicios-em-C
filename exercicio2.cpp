/*
2. Ler um número e dizer se ele está contido no intervalo entre 10 e 15, onde 10 e 15 também
pertencem ao intervalo.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(0, "portuguese");

	float numero;

	printf("Digite um número: ");
	scanf("%f", &numero);
	
	if (numero >= 10 && numero <= 15) {
		printf("O número %.2f está contido no intervalo entre 10 e 15.", numero);
	}
	else {
		printf("O número %.2f não está contido no intervalo entre 10 e 15.", numero);
	}


}
