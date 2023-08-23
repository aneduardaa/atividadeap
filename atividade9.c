#include<stdio.h>
#include<math.h>

int main (){

double carronovo, custo;
double distribuidor = 0.28;
double impostos = 0.45;
printf("digite o valor do custo");
scanf("%lf", &custo);
carronovo = custo + (custo * (distribuidor + impostos / 100));

printf("\no valor do custo final é %.2lf", carronovo);




}