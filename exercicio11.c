#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie um programa que leia vários números.
A cada laço, pergunte se o usuário quer continuar ou não.
No final, mostre na tela: a) O somatório
entre todos os valores b) Qual foi o menor valor digitado
c) A média entre todos os valores d) Quantos valores são pares
*/

int numero,somatotal,menornumero,quantidade,pares,res = 0;
double media;

void somarnumero(){
  somatotal = somatotal + numero;
  quantidade++;
}

void menorvalor(){
  if(numero<menornumero){
    menornumero = numero;
  }
}

void mediatotal(){
  media = somatotal / quantidade;
}

void totalpares(){
  if(numero % 2 == 0){
    pares++;
  }
}

int main(){
  printf("digite um numero: ");
  scanf("%d", &numero);

  menornumero = numero;

  do{
    somarnumero();
    menorvalor();
    mediatotal();
    totalpares();

    printf("Gostaria de enviar mais numeros? '1 = sim' ou '2 = nao'");
    scanf("%d", &res);

    if(res == 1){
      printf("digite um numero: ");
      scanf("%d", &numero);
    }
  }
  while(res == 1);

  printf("a soma total dos valores digitado e de %d \n", somatotal);
  printf("o menor numero foi o numero %d \n",menornumero);
  printf("%d e a quantidade de numeros pares\n",pares);
  printf("%lf e a media  entre os valores",media);
}
