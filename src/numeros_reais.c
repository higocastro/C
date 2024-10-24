#include <stdio.h>

int main (){
    //0 tipo float é pra trabalhar com casas decimais
float n1, n2, soma, divisao;
printf("digite um número e tecle enter:/n");
scanf("%f",&n1);
printf("digite outro número e tecle enter:/n");
scanf("%f", &n2);
soma = n1 + n2;
divisao = n1/n2;

printf("O resultado da soma é %.2f/n",soma);
printf("o resultado da divisao é %.2f/n",divisao);
return 0;

}