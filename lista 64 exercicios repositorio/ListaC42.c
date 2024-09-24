#include<stdio.h>
#include<locale.h>
#include <limits.h>

int main(){

    setlocale(LC_ALL,"");

    int numero;
    int maior = INT_MIN;
    int menor = INT_MAX;

    do
    {
        printf("digite um numero (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero != 0)
        {
            if (numero > maior)
            {
                maior = numero;
            }
            
            if (numero < menor)
            {
                menor = numero;
            }
            
        }
        

    } while (numero !=0);

    printf("O maior número digitado é: %d\n", maior);
    printf("O menor número digitado é: %d\n", menor);

    return 0;
    

}