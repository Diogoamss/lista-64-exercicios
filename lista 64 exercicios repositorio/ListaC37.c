#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    char continuar;
    int op;
    float N1,N2,resul;

    do{   
        printf("Escolha a operação desejada:\n 1-adição\n 2-subtração\n 3-multiplicação\n 4-divisão\n");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            printf("digite o primeiro numero: ");
            scanf("%f",&N1);

            printf("digite o segundo numero: ");
            scanf("%f",&N2);

            resul = N1+N2;

            printf("O resultado da adição é: %.2f\n", resul);
            break;



            case 2:
            printf("digite o primeiro numero: ");
            scanf("%f",&N1);

            printf("digite o segundo numero: ");
            scanf("%f",&N2);

            resul = N1-N2;

            printf("O resultado da subtração é: %.2f\n", resul);
            
            break;


            case 3:
            printf("digite o primeiro numero: ");
            scanf("%f",&N1);

            printf("digite o segundo numero: ");
            scanf("%f",&N2);

            resul = N1*N2;

            printf("O resultado da multiplicação é: %.2f\n", resul);
            break;


            case 4:
            printf("digite o primeiro numero: ");
            scanf("%f",&N1);

            printf("digite o segundo numero: ");
            scanf("%f",&N2);

            resul = N1/N2;

            printf("O resultado da divisão é: %.2f\n", resul);
            break;

        default:
            printf("opção invalida!");
            break;
        }

        printf("\nDeseja voltar ao menu principal? (S/N)  ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');
    
    printf("programa encerrado.\n");
    

    return 0;

}