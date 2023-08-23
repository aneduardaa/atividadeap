# include<stdio.h>
# include<math.h>


int main(){


//plataforma de vendas tal tal
int custo, taxa, frete, venda, lucro;


printf("Digite o valor do custo da mercadoria\n");
scanf("%d", &custo);


printf("Digte o valor da taxa da mercadoria\n");
scanf("%d", &taxa);

printf("digite o valor do frete da mercadoria\n");
scanf("%d", &frete);
fflush(stdin);

venda = custo + taxa + frete;

 printf("digite o valor do lucro\n");
 scanf("%d", lucro);

 float percentagemLucro = ((float)lucro / venda) * 100;

 printf("o valor da venda e: %d\n", venda);
 printf("o valor do lucro e :%d\n", lucro);
 printf("a percentagem de lucro e:%.2f%%\n", percentagemLucro);





}