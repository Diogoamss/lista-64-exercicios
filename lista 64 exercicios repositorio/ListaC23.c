#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int op;
    float N1,N2,resul;


    printf("escolha uma op��o\n 1-adi��o\n 2-subtra��o\n 3-multiplica��o\n 4-divis�o\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("digite um numero: ");
        scanf("%f",&N1);

        printf("digite um outro numero: ");
        scanf("%f",&N2);

        resul = N1+N2;

        printf("O resultado da adi��o �: %f", resul); 
        break;

    case 2:
        printf("digite um numero: ");
        scanf("%f",&N1);

        printf("digite um outro numero: ");
        scanf("%f",&N2);

        resul = N1-N2;

        printf("O resultado da subtra��o �: %f", resul); 
        break;

    case 3:
        printf("digite um numero: ");
        scanf("%f",&N1);

        printf("digite um outro numero: ");
        scanf("%f",&N2);

        resul = N1*N2;

        printf("O resultado da multiplica��o �: %f", resul); 
        break;
   
    case 4:
        printf("digite um numero: ");
        scanf("%f",&N1);

        printf("digite um outro numero: ");
        scanf("%f",&N2);

        resul = N1/N2;

        printf("O resultado da divis�o �: %f", resul); 
        break;

    default:
        printf("Op��o invalida!");
        break;
    }

}