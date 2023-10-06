/* 
1. Pedir ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela.
a) exiba como caractere (%c).
b) exiba como inteiro (%d).
c) exiba como hexadecimal (%x).
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(0, "portuguese");

    char caractere;


    printf("Digite um caractere: ");
    scanf("%c", &caractere);


    printf("O caractere digitado, como caractere foi: %c \n", caractere);
    printf("O caractere digitado, como inteiro foi: %d \n", caractere);
    printf("O caractere digitado, como hexadecimal foi: %x \n", caractere);

}
