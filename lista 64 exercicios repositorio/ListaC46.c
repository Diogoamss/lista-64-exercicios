#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int i, tamanho, soma=0;

    printf("Digite o tamanho do 1º e o 2º vetor: ");
    scanf("%d",&tamanho);

    int x[tamanho];

    for(i=0; i<tamanho; i++){
        printf("Digite um numero para o 1º vetor: ");
        scanf("%d", &x[i]);
    }

    int z[tamanho];
    
    for(i=0; i<tamanho; i++){
        printf("Digite um numero para o 2º vetor: ");
        scanf("%d", &z[i]);
    }
    
    for ( i = 0; i < tamanho; i++)
    {      
        soma+=z[i]*x[i]; //soma dos valores.
        
    }  
        printf("\n%d", soma);
}