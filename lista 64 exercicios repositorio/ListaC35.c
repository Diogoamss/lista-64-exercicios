#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int A,B;

    printf(" contagem de 0 a 100 expondo os multiplos de 10.\n");

    A=0;
    B=100;
    
    while (A<B)
    {
        A++;
        if (A%10==0)
        {
            printf("%d é multiplo de 10!\n", A);
            
        }else{
            printf("%d  \n",A);
        }
        
    }
    

}