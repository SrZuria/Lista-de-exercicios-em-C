/*
3. Escreva um algoritmo que leia 3 n�meros e diga qual � o menor entre os tr�s.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(0, "portuguese");

    float numero1, numero2, numero3;


    printf("Digite o primeiro n�mero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &numero2);

    printf("Digite o terceiro n�mero: ");
    scanf("%f", &numero3);


    if (numero1 <= numero2 && numero1 <= numero3) {
        printf("O menor n�mero digitado foi %.2f", numero1);
	}
	
	else if (numero2 <= numero1 && numero2 <= numero3) {
        printf("O menor n�mero digitado foi %.2f", numero2);
    }
    
	else {
        printf("O menor n�mero digitado foi %.2f", numero3);
    }


}

