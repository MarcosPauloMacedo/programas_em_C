#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie um programa que leia sexo e peso de 8 pessoas,
usando a estrutura “para”. No final, mostre na tela:
a) Quantas mulheres foram cadastradas b) Quantos homens pesam mais de 100Kg
c) A média de peso entre as mulheres d) O maior peso entre os homens.
*/

char sexo[1];
int descobrirsexo;
int peso, totalmasculino, totalfeminino = 0;
char masculino[] = "masculino";
int acimadopeso, pesomasculino, pesofeminino,maiorpeso;
double mediapeso;

void lerdados(){
  printf("digite seu sexo e peso: ");
  scanf("%s %d", &sexo, &peso);
}

void validardados(){
  descobrirsexo = strcmp(sexo,masculino);

  if(descobrirsexo == 0){
    totalmasculino++;
    pesomasculino+=peso;

    int negativo = (maiorpeso - peso) <0;

    switch(negativo){
      case 1: maiorpeso = peso;
      break;
    }

    if(peso>=100){
        acimadopeso++;
    }
  }

  else{
    totalfeminino++;
    pesofeminino+=peso;
  }
}

void descobrirmedia(){
  mediapeso = (double)pesofeminino / totalfeminino;
  printf("%.1lf",mediapeso);
}

int main(){
  int numerodados = 8;

  for(int i = 0;i<numerodados;i++){
    lerdados();
    validardados();
  }
  //a
  printf("%d: foi a quantidade de mulheres cadastradas. \n",totalfeminino);

  //b
  printf("%d: foi a quantidade de homens acima de 100kg \n",acimadopeso);

  //c
  descobrirmedia();

  //d
  printf("%d foi o maior peso entre os homens \n", maiorpeso);
}
