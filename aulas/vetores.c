#include <stdio.h>
#include <stdlib.h>

int main(){
    // int a[2];
    int b[2];
    int i;

    // // atribuição estática
    // a[0]=00;
    // a[1]=10;
    // a[2]=20;
    // // leitura estática
    // printf("%d",a[0]);
    // printf("%d",a[1]);
    // printf("%d",a[2]);

    // atribuição dinâmica
    for(i=0;i<3;i++){
        printf("Insira o %d valor:\n",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++){
        printf("Valor digitado:%d\n",b[i]);
        
    }

    return 0;
}