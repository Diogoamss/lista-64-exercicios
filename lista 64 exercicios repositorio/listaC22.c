#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int A,B,n1;

    printf("digite um numero inteiro: \n");
    scanf("%d", &n1);

    if(n1>0)
    {
        A=n1;

        printf("\n o valor digitado: %d é positivo",A);
    }else{

        B=n1;

        printf("\n o valor digitado: %d é negativo", B);
    }
    

}