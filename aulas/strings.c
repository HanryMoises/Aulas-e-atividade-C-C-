#include <stdio.h>
#include <stdlib.h>
// para usar funções strings, como o strlen() é preciso importar essa biblioteca
#include <string.h>

int main(){ 
    char p[255];
    // setbuf(stdin,0);
    // uma string é um array com 256 posições

    printf("Digita uma palavra:\n");
    // o fgets() é se comporta como um scanf(). A principal diferença é o seu uso, pois scanf() serve para tipo númericos mas não é preciso quanto a quantidade de caracteres de entreda...
    fgets(p,255,stdin);
    // limpa as casa não utilizada do array.
    p[strlen(p)-1]='\0';
    printf("\n\nResultado:%s",p);

    return 0;
}

