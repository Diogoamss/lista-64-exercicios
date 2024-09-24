#include<stdio.h>
   int  main(){
        float qmin, qmax, qmedia;

        printf("digite uma quantidade minima de itens em um estoque: ");
        scanf("%f",&qmin);

        printf("digite uma quantidade maxima de itens em um estoque: ");
        scanf("%f",&qmax);

        qmedia=(qmin+qmax)/2;

        printf("a quantidade media de itens no estoque é de: %f ", qmedia);

        return 0;

    }