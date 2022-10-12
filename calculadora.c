#include <stdio.h>

int main(){
  int n;
  int calculadora = 1;

  printf("Digite um número natural entre 1 e 10: ");
  scanf("%d", &n);

  while(calculadora <= 10){
    int resultado = calculadora * n;
    printf("%d x %d = %d \n",n,calculadora,resultado);

    calculadora ++;
  }
}
