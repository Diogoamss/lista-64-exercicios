#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int numero;
    char resposta;

    do
    {
        printf("digite um numero inteiro:  ");
        scanf("%d", &numero);

            if (numero % 2 == 0)
            {
                printf("%d � par.\n", numero);
            }else
            {
                printf("%d � impar.\n", numero);
            }
            
            if (numero > 0)
            {
                printf("%d � positivo.\n", numero);
            }else if (numero < 0)
            {
                printf("%d � negativo\n", numero);
            }else{
                printf("%d � neutro (zero).\n", numero);
            }
            
        printf("\nDeseja encerrar o programa? (S/N)");
        scanf(" %c", &resposta);

    } while (resposta != 'S' && resposta != 's');

    printf("programa encerrado");    
    
}