#include<stdio.h>
#include<locale.h>
#include <limits.h>// Para usar INT_MAX e INT_MIN

int main(){

    setlocale(LC_ALL,"");

    int numero;
    int menor = INT_MAX; 
    int maior = INT_MIN;

    while (1)
    {
        printf("digite um numero positivo (ou um numero negativo para incerrar o programa)\n");
        scanf("%d",&numero);

            if (numero<0)
            {
                break;
            }
            
            if (numero < menor)
            {
                menor = numero;
            }
            if (numero >maior )
            {
                maior = numero;
            }
            
    }
    
    if (menor == INT_MAX && maior == INT_MIN)
    {
            printf("nenhum numero positivo foi inserido\n");
    }else{

        printf("o menor numero é: %d\n", menor);
        printf("o maior numero é: %d\n", maior);
    }
    

}