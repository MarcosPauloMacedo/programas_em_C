#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

Faça um programa  que leia a idade de várias pessoas. A cada laço,
você deverá perguntar para o usuário se ele quer ou não continuar
a digitar dados. No final, quando o usuário decidir parar, mostre
na tela:

a) Quantas idades foram digitadas.
b) Qual é a média entre as idades digitadas.
c) Quantas pessoas tem 21 anos ou mais.

*/

int numerodeidades,maior21,todasidades = 0;
double media;
int idade,parar;

void maisde21(){
  if(idade>=21){
    maior21+=1;
  }
}

void todasasidades(){
  numerodeidades +=1;
}

void somatodasidades(){
  todasidades = todasidades + idade;
}

int main(){

  do{
    printf("Digite um idade: \n");
    scanf("%d", &idade);

    maisde21();
    todasasidades();
    somatodasidades();

    printf("Gostaria de enviar mais idades? '1 = sim' '2 = nao': ");
    scanf("%d", &parar);

  }while(parar == 1);

  media = (double)todasidades / numerodeidades;
  printf("foram digitados %d idades \n", numerodeidades);
  printf("A media de idade e de %.1lf anos \n", media);
  printf("E de todas elas %d tinha acima de 21 anos \n", maior21);
}
