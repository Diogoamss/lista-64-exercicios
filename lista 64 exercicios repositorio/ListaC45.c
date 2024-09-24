#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int i, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho);

    int v[tamanho];

    //cadatrar numeros digitados pelo usuario no vetor.
    for (i=0; i<tamanho; i++){
        printf("\n Digite um numero: ");
        scanf("%d", &v[i]);

    }

    for(i=tamanho-1; i>=0; i--){
        printf("%d\n", v[i]);

    }

    return 0;

}