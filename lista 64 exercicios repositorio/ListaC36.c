#include<stdio.h>
#include<locale.h>
#include <limits.h>// Para usar INT_MAX e INT_MIN

int main(){

    setlocale(LC_ALL,"");

    int numeros[10];
    int maior, menor;
    float media =0.0;

    printf("digite 10 valores inteiros positivos:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("valor %d: ", i+1);
        scanf("%d", &numeros[i]);

        if (numeros[i] <= 0)
        {
            printf("por favor, digite apenas valores positivos");
            i--;
        }
        
    }
    
    maior=menor=numeros[0];

    for (int i = 1; i < 10; i++)
    {
        if (numeros[i]>maior)
        {
            maior = numeros[i];
        }
        if (numeros[i]<menor)
        {
            menor = numeros[i];
        }
               
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        media += numeros[i];
    }
    media /= 10.0;

    printf("\n O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    printf("a media dos valores é: %.2f\n", media);

    return 0;
}