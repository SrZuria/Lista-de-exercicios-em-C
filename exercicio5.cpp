/*
5. Leia dois valores, e exiba sua soma. Em seguida pergunte ao usuário: “Novo Cálculo
(S/N)?”. Deve-se ler a resposta e se a resposta for ‘S’ (sim), deve-se repetir todos os
comandos (instruções) novamente, mas se for qualquer outra resposta, o algoritmo deve
ser finalizado escrevendo a mensagem “Fim dos Cálculos”. Escolha a opção mais
adequada de comando de loop para resolver este problema.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(0, "portuguese");

	int soma, numero1, numero2;
	char comando;
	
	do {
		
		printf("Digite dois números inteiros: ");
		scanf("%d %d", &numero1, &numero2);
		
		soma = numero1 + numero2;
		printf("O resultado da soma foi: %d\n", soma);
		
		printf("Novos cálculos?(S/N)\n");
		scanf(" %c", &comando);
	} while (comando == 'S' || comando == 's');
	
	
	printf("Fim dos cálculos.");

}
