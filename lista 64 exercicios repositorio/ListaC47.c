#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int i, tamanho=10, v[tamanho], x;

    for (i=0; i<tamanho; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &v[i]);    
    }
        
    printf("\nDigite um valor para a analise: ");
    scanf("%d", &x);


    for (i=0; i<tamanho; i++){
        
        if (v[i]<x)
        {
            printf("\nO numero %d é menor que %d", v[i],x);
        }
        else{

            if (v[i]>x)
            {
                printf("\nO numero %d é maior que %d", v[i],x);
            }
            else{
                
                if (v[i]==x)
                {
                    printf("\nAmbos os numeros %d e %d são iguais", v[i],x);
                }
                

            }
                

        }
        

    }

    return 0;
}