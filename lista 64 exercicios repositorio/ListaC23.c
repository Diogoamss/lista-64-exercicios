#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int op;
    float N1,N2,resul;


    printf("escolha uma opção\n 1-adição\n 2-subtração\n 3-multiplicação\n 4-divisão\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("digite um numero: ");
        scanf("%f",&N1);

        printf("digite um outro numero: ");
        scanf("%f",&N2);

        resul = N1+N2;

        printf("O resultado da adição é: %f", resul); 
        break;

    case 2:
        printf("digite um numero: ");
        scanf("%f",&N1);

        printf("digite um outro numero: ");
        scanf("%f",&N2);

        resul = N1-N2;

        printf("O resultado da subtração é: %f", resul); 
        break;

    case 3:
        printf("digite um numero: ");
        scanf("%f",&N1);

        printf("digite um outro numero: ");
        scanf("%f",&N2);

        resul = N1*N2;

        printf("O resultado da multiplicação é: %f", resul); 
        break;
   
    case 4:
        printf("digite um numero: ");
        scanf("%f",&N1);

        printf("digite um outro numero: ");
        scanf("%f",&N2);

        resul = N1/N2;

        printf("O resultado da divisão é: %f", resul); 
        break;

    default:
        printf("Opção invalida!");
        break;
    }

}