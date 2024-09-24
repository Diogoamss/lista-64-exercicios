#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int i, tamanho, x=0;

    printf("digite o tamanho do 1º e 2º vetor: ");
    scanf("%d",&tamanho);

    int v1[tamanho], v2[tamanho];

    for(i=0;i<tamanho;i++){
        printf("Insira o %d° número do 1° vetor: ", i+1);
        scanf("%d",&v1[i]);
        printf("Insira o %d° número do 2° vetor: ", i+1);
        scanf("%d",&v2[i]);
        if ( v2[i]==v1[i]){x++;}
    }
    printf("\nIguais: %d", x);
    
    return 0;
}