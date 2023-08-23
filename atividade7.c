#include<stdio.h>
#include<math.h>

int main (){

int ano, meses, dias;

printf("digite sua idade em anos\n");
scanf("%d", &ano);


 printf("digite sua idade em meses\n");
 scanf("%d", &meses);
 

 printf("digite sua idade em dias\n");
 scanf("%d", &dias);

 int idadeemdias = (ano * 365) + (meses * 30) + dias;


printf("sua idade em dias e:%d", idadeemdias);



}