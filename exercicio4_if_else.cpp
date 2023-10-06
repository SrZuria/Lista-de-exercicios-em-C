/*
4. Leia o ano de nascimento de um nadador, calcule sua idade, e classifique-o em uma das
categorias:
 * Infantil A --- de 5 a 7 anos
 * Infantil B --- de 8 a 10 anos
 * Juvenil A --- de 11 a 13 anos
 * Juvenil B --- de 14 a 17 anos
 * Sênior --- maiores de 17 anos
Obs.: Utilize como ano atual o ano de 2021.
Faça um algoritmo utilizando IF ELSE e outro utilizando SWITCH CASE
O programa deve fornecer uma saída do tipo:
Nadador de idade “idade” é da categoria “categoria”
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

	setlocale(0, "portuguese");

	int ano_nascimento, idade;

	printf("Digiteo ano de nascimento do nadador: ");
	scanf("%d", &ano_nascimento);

	idade = 2021 - ano_nascimento;

	if (idade >= 5 && idade <= 7) {
		printf("O nadador de idade %d é da categoria Infantil A", idade);
	}
	
	else if (idade >=8 && idade <=10) {
		printf("O nadador de idade %d é da categoria Infantil B", idade);			
	}
	
	else if (idade >=11 && idade <=13) {
		printf("O nadador de idade %d é da categoria Juvenil A", idade);			
	}
	
	else if (idade >=14 && idade <=17) {
		printf("O nadador de idade %d é da categoria Juvenil B", idade);			
	}
	
	else if (idade > 17 && idade <= 70) {
		printf("O nadador de idade %d é da categoria Sênior", idade);			
	}
	
	else{
		printf("Digite um ano de nascimento válido.");
	}






}
