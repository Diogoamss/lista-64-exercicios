#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    int A;

    printf("digite um numero para a verificaï¿½ï¿½o: ");
    scanf("%i",&A);

    if ((A>=0)&&(A<=9))
    {
        printf("o valor escolhido é valido! ");
    }else{

        printf("o valor escolhido não é valido! ");
    }
 }