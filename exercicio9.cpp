/*
9. Algoritmo para ler um nome completo, com espaços e acentuação (atenção para o formato
passado para o scanf()). Em seguida exiba o nome de três formas diferentes:
a) texto normal, utilizando a máscara de formatação string (%s).
b) exiba cada uma das palavras do nome em linhas diferentes – use o espaço para separar as
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
