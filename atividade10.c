#include<stdio.h>
#include<math.h>

int main(){
int carrosvendidos;
double salariofixo, cadacarro, valordasvendas, salariofinal;

printf("digite o valor do salario fixo");
scanf("%lf", &salariofixo);
printf("digite o valor de carros vendidos");
scanf("%lf", &cadacarro);
printf("digite o valor das vendas");
scanf("%lf", &valordasvendas);
printf("digite o numero de carros vendidos");
scanf("%d", &carrosvendidos);

salariofinal = salariofixo +( cadacarro * carrosvendidos) + (0.05 * valordasvendas);
printf("O salário final é: R$%.2lf\n", salariofinal);











}