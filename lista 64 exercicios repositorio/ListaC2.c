#include<stdio.h>

    int main(){

        float cotacao, valor, conversao;

        printf("digite o valor da cotacao do dolar em relacao ao real: ");
        scanf("%f",&cotacao);

        printf("digite o valor que deseja converter: ");
        scanf("%f",&valor);

        conversao= (cotacao*valor);

        printf("%f", conversao);

        return 0;


    }