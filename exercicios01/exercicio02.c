#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void finalizar(){
  printf("acabou! \n \n");
}

int main(){
  // algoritimo que mostre uma contagem regressiva de 10 até 3

  for(int i = 10;i>=3;i--){
    printf("%d \n",i);
  }

  finalizar();

  int valor = 10;
  int maior = valor>2;

  while(maior){
    printf("%d \n",valor);
    valor--;
    maior = valor>2;
  }

  finalizar();
}
