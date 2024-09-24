#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    int n1,n2,n3;

    printf("digite um valor para o primeiro numero: ");
    scanf("%i",&n1);

    printf("digite um valor para o segundo numero: ");
    scanf("%i",&n2);
    
    printf("digite um valor para o terceiro numero: ");
    scanf("%i",&n3);

    if (n1>n2 && n2>n3)
    {
        printf("%i %i %i",n1,n2,n3);
    }
    
    if (n2>n1 && n1>n3)
    {
        printf("%i %i %i",n2,n1,n3);
    }

    if (n2>n3 && n3>n1)
    {
        printf("%i %i %i",n2,n3,n1);
    }

    if (n1>n3 && n3>n2)
    {
        printf("%i %i %i",n1,n2,n3);
    }
    
    if (n3>n1 && n1>n2)
    {
        printf("%i %i %i",n3,n1,n2);
    }
    
    if ((n3>n2)&&(n2>n1))
    {
        printf("%i%i%i",n3,n2,n1);
    }
      
    
 }