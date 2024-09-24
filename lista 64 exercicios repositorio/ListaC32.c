#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

     int numero;

    printf("Digite um n�mero inteiro positivo menor que 10 e maior que zero: ");
    scanf("%d", &numero);
    

        if (numero <= 0 || numero >= 10) {
            printf("N�mero fora do intervalo permitido!\n");
            return 1;
        }
    
    int soma = 0;
    int contador = 0;
    int atual = numero;


    while (contador < 20) {
        if (atual % 2 != 0) {
            soma += atual * atual;
            contador++;
        }
        atual++;
    }



    printf("A soma dos quadrados dos 20 primeiros n�meros �mpares a partir de %d �: %d\n", numero, soma);

    return 0;
    
}