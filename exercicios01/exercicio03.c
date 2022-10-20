#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void finalizar(){
  printf("acabou! \n \n");
}

int main(){
//mostre a seguinte contagem: 0 3 6 9 12 15 18 Acabou!

  for(int i=0;i<=18;i+=3){
  printf("%d \n",i);
  }

  finalizar();

  int numero = 0;
  int maior = numero<=18;

  while(maior){
    printf("%d \n",numero);
    numero+=3;
    maior = numero <=18;
  }
  finalizar();
}
