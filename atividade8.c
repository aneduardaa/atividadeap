#include<stdio.h>
#include<math.h>

int main (){
double salario, percentual, nsalario;

printf("digite o valor do salário");
scanf("%lf", &salario);

printf("valor do percentual");
scanf("%lf", &percentual);

nsalario = salario + (salario * percentual / 100);

printf("o salario é:%.2lf\n" , nsalario);

}