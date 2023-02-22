#include <stdio.h>
#include <stdlib.h>

int encaixa(int aa, int bb){
    int array[]={aa,bb};
    int i;
    int count =sizeof(array)/sizeof(array[0]);
    for(i=count-1;i>=0;i--){
        printf("%d",array[i]);
    }
    return 0;
    
}
int main(){
    int a,b;

    printf("Valor A:");
    scanf("%d",&a);

    printf("Valor B:");
    scanf("%d",&b);

    encaixa(a,b);

    
    return 0;
}