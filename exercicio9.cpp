/*
9. Algoritmo para ler um nome completo, com espa�os e acentua��o (aten��o para o formato
passado para o scanf()). Em seguida exiba o nome de tr�s formas diferentes:
a) texto normal, utilizando a m�scara de formata��o string (%s).
b) exiba cada uma das palavras do nome em linhas diferentes � use o espa�o para separar as
palavras
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	

	char nome[100];
	int i;

	printf("Digite seu nome completo: ");
	scanf("%[^\n]s", nome);

	printf("Nome completo: %s\n", nome);
	
  
    for (i = 0; nome[i] != '\0'; i++) {
    	if (nome[i] == ' ') {
      		printf("\n");
    	} 
		else {
      		printf("%c", nome[i]);
    	}
  }


}
