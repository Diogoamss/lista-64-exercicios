#include<stdio.h>
 #include<locale.h>

 int main(){

     setlocale(LC_ALL,"");

     int a,m,d;

     printf("digite sua idade: ");
     scanf("%d",&a);

     m=a*30;
     d=a*365;

     printf("sua idade e exatamente  %d\n",a);
     printf("meses: %d\n",m);
     printf("e dias: %d\n",d);


 }