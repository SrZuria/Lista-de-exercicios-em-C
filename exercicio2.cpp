/*
2. Ler um n�mero e dizer se ele est� contido no intervalo entre 10 e 15, onde 10 e 15 tamb�m
pertencem ao intervalo.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(0, "portuguese");

	float numero;

	printf("Digite um n�mero: ");
	scanf("%f", &numero);
	
	if (numero >= 10 && numero <= 15) {
		printf("O n�mero %.2f est� contido no intervalo entre 10 e 15.", numero);
	}
	else {
		printf("O n�mero %.2f n�o est� contido no intervalo entre 10 e 15.", numero);
	}


}
