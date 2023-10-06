/*
3. Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(0, "portuguese");

    float numero1, numero2, numero3;


    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("Digite o terceiro número: ");
    scanf("%f", &numero3);


    if (numero1 <= numero2 && numero1 <= numero3) {
        printf("O menor número digitado foi %.2f", numero1);
	}
	
	else if (numero2 <= numero1 && numero2 <= numero3) {
        printf("O menor número digitado foi %.2f", numero2);
    }
    
	else {
        printf("O menor número digitado foi %.2f", numero3);
    }


}

