#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int numero;

  printf("digite um numero maior que zero: ");
  scanf("%d", &numero);

  while(numero==0){
    printf("digite um numero maior que zero: ");
    scanf("%d", &numero);
  }

  do{
    printf("%d \n",numero);
    numero--;
  }while(numero>=0);
}
