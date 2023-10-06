/*
10.Fazer um programa que codifica uma string pelo m�todo ZENIT-POLAR
 Z E N I T
 P O L A R
Ou seja, onde aparece um 'Z' no string de entrada, aparecer� um 'P' na sa�da; e,
semelhantemente, onde aparece um 'P' no string de entrada, aparecer� um 'Z' na sa�da. Isto
deve ocorrer para todos os pares em ZENIT-POLAR, mai�sculas e min�sculas. As outras
letras n�o s�o alteradas.
Por exemplo, o string "Parabens a voce" � codificado para "Zitibols i veco". Ao se
aplicar duas vezes a transforma��o, obt�m-se o mesmo string, ou seja, a codifica��o de
"Zitibols i veco" � "Parabens a voce".
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	

	
	
	char frase_original[100];
	char frase_codificada[100];
	int i;


	printf("Digite uma Frase: ");
	scanf("%[^\n]s", frase_original);


	for (i = 0; frase_original[i] != '\0'; i++) {
		switch (frase_original[i]) {
        	case 'Z':
        		frase_codificada[i] = 'P';
        		break;
      		case 'P':
        		frase_codificada[i] = 'Z';
        		break;
      		case 'E':
        		frase_codificada[i] = 'O';
        		break;
      		case 'O':
        		frase_codificada[i] = 'E';
        		break;
      		case 'N':
        		frase_codificada[i] = 'L';
        		break;
      		case 'L':
        		frase_codificada[i] = 'N';
        		break;
      		case 'I':
        		frase_codificada[i] = 'A';
        		break;
      		case 'A':
        		frase_codificada[i] = 'I';
        		break;
      		case 'T':
        		frase_codificada[i] = 'R';
        		break;
      		case 'R':
        		frase_codificada[i] = 'T';
        		break;
        	case 'z':
        		frase_codificada[i] = 'p';
        		break;
      		case 'p':
        		frase_codificada[i] = 'z';
        		break;
      		case 'e':
        		frase_codificada[i] = 'o';
        		break;
      		case 'o':
        		frase_codificada[i] = 'e';
        		break;
      		case 'n':
        		frase_codificada[i] = 'l';
        		break;
      		case 'l':
        		frase_codificada[i] = 'n';
        		break;
      		case 'i':
        		frase_codificada[i] = 'a';
        		break;
      		case 'a':
        		frase_codificada[i] = 'i';
        		break;
      		case 't':
        		frase_codificada[i] = 'r';
        		break;
      		case 'r':
        		frase_codificada[i] = 't';
        		break;
      		default:
        		frase_codificada[i] = frase_original[i];
    	}
  	}


	printf("Frase codificada: %s\n", frase_codificada);

}

