#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Crie um algoritmo que leia o valor inicial da contagem,
o valor final e o incremento, mostrando em seguida todos os valores no
intervalo: Ex: Digite o primeiro Valor: 3 Digite o último Valor:
10 Digite o incremento: 2 Contagem: 3 5 7 9 Acabou!

*/

void validarinicio(int validador, int variavel){
  while(validador){
    printf("numero digitado e maior que o permitido, digite novamente\n");
    printf("um numero natural entre 0 e 10:");
    scanf("%d", &variavel);
    validador = variavel>10;
  }
}

void validarfinal(int validador, int vi, int vf){
    while(validador){
        printf("Valor nao pode ser menor que o primeiro, digite novamente: \n");
        scanf("%d", &vf);
        validador = vi > vf;
    }
  }

int main(){
  int valorinicial;
  int valorfinal;
  int incremento;

  printf("Digite um numero natural entre 0 e 10: ");
  scanf("%d", &valorinicial);

  int maior = valorinicial>10;

  validarinicio(maior,valorinicial);

  printf("Ok, agora digite um numero maior que o primeiro: ");
  scanf("%d", &valorfinal);

  int menor = valorinicial > valorfinal;

  validarfinal(menor,valorinicial,valorfinal);

  printf("Certo! Agora digite um incremento:");
  scanf("%d", &incremento);

  for(int i = valorinicial;i<=valorfinal;i+=incremento){
  printf("%d \n",i);
  }
}
