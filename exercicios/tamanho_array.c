#include <stdio.h>
#include <stdlib.h>

int main() {
    int meu_array[] = {1, 2, 3, 4, 5};
    // retorna a somatória da quantidade de bytes de um array
    int tamanho = sizeof(meu_array);
    int count = sizeof(meu_array)/sizeof(meu_array[0]);
    printf("O tamanho do array em bytes é: %d\n", tamanho);
    printf("O tamanho do array é: %d\n", count);
  return 0;
}