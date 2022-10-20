#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void finalizar(){
  printf("acabou! \n\n");
}
int main(){
  //receber um valor e contar até que chegue nele

  int valor;

  printf("Digite um valor: ");
  scanf("%d", &valor);

  for(int i=0;i<=valor;i++){
    printf("%d \n",i);
  }

  finalizar();

  int numero = 0;
  int tamanho = numero <= valor;

  while(tamanho){
    printf("%d \n",numero);
    numero ++;
    tamanho = numero <= valor;
  }

  finalizar();
}
