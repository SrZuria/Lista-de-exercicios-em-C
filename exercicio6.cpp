/*
6. Pergunte ao usuário qual o tamanho do quadrado que ele quer que seja desenhado; Por
exemplo, se ele informar 5 por 5, o desenho ficará assim:
X X X X X
X X X X X
X X X X X
X X X X X
X X X X X
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(0, "portuguese");
	
    int linha, coluna, linhas, colunas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);


    if (linhas <= 0 || colunas <= 0) {
        printf("Digite números válidos.\n");
    } 
    
	else {
        for (linha = 0; linha < linhas; linha++) {
            for (coluna = 0; coluna < colunas; coluna++) {
                printf("X ");
            }
            printf("\n");
        }
    }

}

