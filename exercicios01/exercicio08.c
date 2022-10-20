#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Crie um programa que calcule e mostre na tela o
resultado da soma entre 6 + 8 + 10 + 12 + 14 + ... + 98 + 100.

*/

void finalizar(){
  printf("acabou! \n \n");
}

int soma = 0;

int main(){

  for(int i=6;i<=100;i+=2){
    soma = soma + i;

    printf("%d \n",soma);
  }

  finalizar();

  soma = 0;
  int numero = 6;
  int menor = 6<100;

  while(menor){
    soma = soma + numero;
    printf("%d \n",soma);
    numero +=2;
    menor = numero <100;
  }

  finalizar();

  soma = 0;
  numero = 6;

  do
  {
    soma = soma + numero;
    printf("%d \n",soma);
    numero+=2;
    menor = numero <100;
  }while(menor);

  finalizar();
}
