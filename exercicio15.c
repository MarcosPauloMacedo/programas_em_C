#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  char nome[1];
  char nome1[1];

  sprintf(nome1,"Marcos");

  printf("digite um nome: ");
  scanf("%s", &nome);
  printf("%s \n",nome);

  int verdadeiro = strcmp(nome,nome1);
  printf("%d",verdadeiro);
}
