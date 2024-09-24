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
                printf("%d é par.\n", numero);
            }else
            {
                printf("%d é impar.\n", numero);
            }
            
            if (numero > 0)
            {
                printf("%d é positivo.\n", numero);
            }else if (numero < 0)
            {
                printf("%d é negativo\n", numero);
            }else{
                printf("%d é neutro (zero).\n", numero);
            }
            
        printf("\nDeseja encerrar o programa? (S/N)");
        scanf(" %c", &resposta);

    } while (resposta != 'S' && resposta != 's');

    printf("programa encerrado");    
    
}