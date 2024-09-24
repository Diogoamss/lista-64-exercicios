#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int A,B;

    printf(" contagem de numeros impares de 100 a 200\n");

    A=101;
    B=201;

    while (A<B)
    {
        printf("%d   \n",A);
        A=(A+3);
    }
    
}