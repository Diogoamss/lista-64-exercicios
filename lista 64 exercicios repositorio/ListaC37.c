#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    char continuar;
    int op;
    float N1,N2,resul;

    do{   
        printf("Escolha a opera��o desejada:\n 1-adi��o\n 2-subtra��o\n 3-multiplica��o\n 4-divis�o\n");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            printf("digite o primeiro numero: ");
            scanf("%f",&N1);

            printf("digite o segundo numero: ");
            scanf("%f",&N2);

            resul = N1+N2;

            printf("O resultado da adi��o �: %.2f\n", resul);
            break;



            case 2:
            printf("digite o primeiro numero: ");
            scanf("%f",&N1);

            printf("digite o segundo numero: ");
            scanf("%f",&N2);

            resul = N1-N2;

            printf("O resultado da subtra��o �: %.2f\n", resul);
            
            break;


            case 3:
            printf("digite o primeiro numero: ");
            scanf("%f",&N1);

            printf("digite o segundo numero: ");
            scanf("%f",&N2);

            resul = N1*N2;

            printf("O resultado da multiplica��o �: %.2f\n", resul);
            break;


            case 4:
            printf("digite o primeiro numero: ");
            scanf("%f",&N1);

            printf("digite o segundo numero: ");
            scanf("%f",&N2);

            resul = N1/N2;

            printf("O resultado da divis�o �: %.2f\n", resul);
            break;

        default:
            printf("op��o invalida!");
            break;
        }

        printf("\nDeseja voltar ao menu principal? (S/N)  ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');
    
    printf("programa encerrado.\n");
    

    return 0;

}