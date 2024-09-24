#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    int A,B;

    printf("escreva o primeiro numero: ");
    scanf("%i",&A);

    printf("escreva o segundo numero: ");
    scanf("%i",&B);

    if (A==B)
    {
        printf("os dois numero são iguais");
    }
    
    if (A>B)
    {
        printf("o numero: %i.  É maior que: %i",A,B);
    }
    
    if (A<B)
    {
        printf("o numero: %i.  É maior que: %i",B,A);
    }
    
 }