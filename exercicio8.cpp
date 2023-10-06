/*
8. Gere uma matriz 3x4 de inteiros, e pe�a para o usu�rio do programa preench�-la. Ap�s
preenchida,
a) Informe qual foi o maior n�mero encontrado na matriz.
b) Informe qual foi o menor n�mero encontrado na matriz. 
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(0, "portuguese");
	
    int matriz[3][4];
    int maior, menor;
    int linha, coluna;


    printf("Preencha a matriz 3x4 de inteiros:\n");

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            printf("Digite o valor para matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }


    maior = menor = matriz[0][0];


    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            if (matriz[linha][coluna] > maior) {
                maior = matriz[linha][coluna];
            }
            if (matriz[linha][coluna] < menor) {
                menor = matriz[linha][coluna];
            }
        }
    }


    printf("Matriz preenchida:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            printf("%d  ", matriz[linha][coluna]);
        }
        printf("\n");
    }


    printf("O maior n�mero na matriz �: %d\n", maior);
    printf("O menor n�mero na matriz �: %d\n", menor);


}

