#include<stdio.h>
#include<locale.h>
int main(){

    setlocale(LC_ALL,"");
    float pp, co, vt;
    int qp, cp;
        

    printf("digite o codigo da peca: ");
    scanf("%d",&cp);

    printf("digite a quantidade de pecas: ");
    scanf("%d",&qp);

    printf("digite o valor das pecas vendidas: ");
    scanf("%f",&pp);

    vt=qp*pp;

    co=vt*0.05;

    printf("o valor total das peças vendidas será de %f", vt);
        
    printf("o valor da comissao do funcionario será de %f", co);
       


    return 0;

       
       
       
       }