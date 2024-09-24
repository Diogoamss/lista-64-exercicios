#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int A,B;

    printf("contagem decrescente de 0 a 100\n");

    A=100;
    B=0;

    while (B<A)
    {
        printf("%d  \n",A);
        A--;
    }
    
}