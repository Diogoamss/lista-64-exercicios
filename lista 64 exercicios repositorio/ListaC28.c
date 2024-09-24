#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int A,B;

    printf("contagem de 1 a 2000");

    A=0;
    B=2001;

    while (A<B)
    {
        printf("%d   \n",A);
        A++;
    }
    

}