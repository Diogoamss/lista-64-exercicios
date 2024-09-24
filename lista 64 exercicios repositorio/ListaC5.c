 #include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");


    float vm, tp, dist, gasolina;

    printf("digite o tempo gasto na viagem: ");
    scanf("%f",&tp);

    printf("digite a velociade feita pelo trajeto: ");
    scanf("%f",&vm);

    dist=vm+tp;

    gasolina=dist/12;

    printf("a distancia percorrida pelo trajeto e: %f\n",dist);
    printf("a quantidade de gasolina gasta no trajeto e: %f\n",gasolina);
    
 }