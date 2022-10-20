#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //contagem regressiva de 100 até zero pulando de 5 em 5
  void finalizar(){
    printf("acabou! \n \n");
  }

  for(int i = 100;i>=0;i-=5){
    printf("%d \n",i);
  }

  finalizar();

  int n = 100;
  int maior = n>=0;

  while(maior){
    printf("%d \n",n);
    n-=5;
    maior = n>=0;
  }
  finalizar();
}
