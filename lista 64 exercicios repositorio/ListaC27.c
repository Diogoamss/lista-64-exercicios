#include <stdio.h>


unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long resultado = 1;
        for (int i = 2; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
}

int main() {
    int quantidade, numero;

    printf("Digite a quantidade de números que deverá processar: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
 
        printf("Digite um número: ");
        scanf("%d", &numero);

        unsigned long long resultado = fatorial(numero);
        printf("O fatorial de %d é %llu\n", numero, resultado);
    }

    return 0;
}
