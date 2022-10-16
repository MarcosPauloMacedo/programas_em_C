#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numero = 30;

int main(){
/*
  Desenvolva um algoritmo que mostre uma contagem
  regressiva de 30 até 1, marcando os números que forem divisíveis por 4,
  exatamente como mostrado abaixo: 30 29 [28] 27 26 25
  [24] 23 22 21 [20] 19 18 17 [16]...
*/

void finalizar(){
  printf("acabou! \n \n");
}

for(int i= numero;i>=0;i--){
  if(i % 4 == 0){
    printf("[%d] \n",i);
  }
  else{
    printf("%d \n",i);
  }
}

finalizar();

int maior = numero>=0;

while(maior){
  if(numero % 4 == 0){
    printf("[%d] \n",numero);
  }
  else{
    printf("%d \n",numero);
  }
  numero--;
  maior = numero>=0;
}

finalizar();
numero = 30;

do {
  if(numero % 4 == 0){
    printf("[%d], \n",numero);
  }
  else{
    printf("%d \n",numero);
  }
  numero--;
} while(numero>=0);

  finalizar();
}
