#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Desenvolva um aplicativo que mostre na tela o
resultado da expressão 500 + 450 + 400 + 350 + 300 + ... + 50 + 0

*/

void soma(int vi,int vf,int incremento){
  int soma = 0;

  for(int i=vi ; i>= vf; i-=incremento){
     soma = soma + i;
    printf("%d \n",soma);
  }
}

int main(){
  int vlrinicial = 500;
  int vlrfinal = 0;
  int incremento = 50;

  soma(vlrinicial,vlrfinal,incremento);
}
